#!/bin/zsh

script_dir="${0:A:h}"
repo_dir="$1"

if [ "$repo_dir" = "" ]; then
	echo 'Please specify repository you want to test'
	return 1
fi

norminette -R CheckDefine $repo_dir

declare -a dependency
dependency[06]="ft_putchar.c ft_print_alphabet_test.c"
dependency[07]="ft_putchar.c ft_print_numbers_test.c"
dependency[08]="ft_putchar.c ft_is_negative_test.c"
dependency[09]="ft_ft_test.c"
dependency[10]="ft_swap_test.c"
dependency[11]="ft_div_mod_test.c"
dependency[12]="ft_iterative_factorial_test.c"
dependency[13]="ft_recursive_factorial_test.c"
dependency[14]="ft_sqrt_test.c"
dependency[15]="ft_putchar.c ft_putstr_test.c"
dependency[16]="ft_strlen_test.c"
dependency[17]="ft_strcmp_test.c"
dependency[18]="ft_putchar.c"
dependency[19]="ft_putchar.c"
dependency[20]="ft_strdup_test.c"
dependency[21]="ft_range_test.c"
dependency[22]="ft_abs_test.c"
dependency[23]="ft_point_test.c"
dependency[25]="ft_putnbr.c ft_foreach_test.c"
dependency[26]="ft_count_if_test.c"

autoload -U colors && colors

for e in {06..27}; do
	exercise_dir="$repo_dir/ex$e"
	if [[ ! -d $exercise_dir ]] continue
	echo $fg[red]"--- ex$e ---"$fg[black]
	for f in ${=dependency[$e]}; do; ln -s $script_dir/$f $exercise_dir/$f 2> /dev/null; done
	case $e in
	24)
		mkdir $exercise_dir/includes 2> /dev/null
		mkdir $exercise_dir/srcs 2> /dev/null
		for f in $(find $script_dir/ex24/includes -type f); do ln -s $f $exercise_dir/includes/${f##*/} 2> /dev/null; done
		for f in $(find $script_dir/ex24/srcs -type f); do ln -s $f $exercise_dir/srcs/${f##*/} 2> /dev/null; done
		echo -n $fg[green]
		(cd $exercise_dir && make)
		echo -n $fg[black]
		nm -s $exercise_dir/libft.a
	;;
	27)
		(cd $exercise_dir &&
			autoload -U colors && colors
			echo -n $fg[green]
			make &&
			echo $fg[cyan]"[Test] Missing argument"$fg[black]
			./ft_display_file
			echo $fg[cyan]"[Test] Too many argument"$fg[black]
			./ft_display_file Makefile Makefile
			echo $fg[cyan]"[Test] File display"$fg[black]
			./ft_display_file Makefile)
	;;
	*)
		echo -n $fg[green]
		cc -Wall -Wextra -Werror -o $repo_dir/a.out $exercise_dir/*.c
		echo -n $fg[black]
	;;
	esac
	$repo_dir/a.out
done
