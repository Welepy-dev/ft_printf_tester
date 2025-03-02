#!/bin/bash
ascii_art(){
echo "  ______ _______   _____  _____  _____ _   _ _______ ______   _______ ______  _____ _______ ______ _____  "
echo " |  ____|__   __| |  __ \|  __ \|_   _| \ | |__   __|  ____| |__   __|  ____|/ ____|__   __|  ____|  __ \ "
echo " | |__     | |    | |__) | |__) | | | |  \| |  | |  | |__       | |  | |__  | (___    | |  | |__  | |__) |"
echo " |  __|    | |    |  ___/|  _  /  | | | .   |  | |  |  __|      | |  |  __|  \___ \   | |  |  __| |  _  / "
echo " | |       | |    | |    | | \ \ _| |_| |\  |  | |  | |         | |  | |____ ____) |  | |  | |____| | \ \ "
echo " |_|       |_|    |_|    |_|  \_\_____|_| \_|  |_|  |_|         |_|  |______|_____/   |_|  |______|_|  \_\ "
echo "                                                                                                          "
echo "                                                                                                          "
}

#cc teste.c -o ft_printf_test -L. -lftprintf
#if [ $? -ne 0 ]; then
#	echo "Compilation failed!"
#	exit 1
#fi
#
rm failed.txt
read_input(){
	clear
	ascii_art
	echo "Insert [1] for mandatory, [2] for bonus"
	read option
	if [ "$option" != "1" ] && [ "$option" != "2" ]; then
		echo "WRONG!"
		read_input
	elif [ "$option" == "1" ]; then
		./mandatory.sh
	elif [ "$option" == "2" ]; then
		./bonus.sh
	fi
}

read_input

#./ft_printf_test > result.txt
#
#if [ $? -ne 0 ]; then
#	echo "Execution failed!"
#	exit 1
#fi
#
#read_input
#if [ ! -f "input_examples.txt" ]; then
#	echo "Error: input_examples.txt file not found!"
#	exit 1
#fi
#
#if [ ! -f "went_wrong.txt" ]; then
#	echo "Error: went_wrong.txt file not found!"
#	exit 1
#fi
#
#mapfile -t expected_outputs < input_examples.txt
#mapfile -t test_lines < went_wrong.txt
#
#declare -i line_number=0
#declare -i wrong=0
#declare -i right=0
#declare -a wrongs=()
#
#while IFS= read -r result_line; do
#	if [ $line_number -lt ${#expected_outputs[@]} ]; then
#		expected_line="${expected_outputs[$line_number]}"
#	else
#		expected_line=""
#	fi
#
#	echo "$result_line | $expected_line : $(if [ "$result_line" = "$expected_line" ]; then echo "OK"; else echo "KO"; fi)"
#
#	if [ "$result_line" != "$expected_line" ]; then
#		wrong=$((wrong + 1))
#		echo "${test_lines[$line_number]}" >> failed.txt
#	else
#		right=$((right + 1))
#	fi
#	line_number=$((line_number + 1))
#	sleep 0.08
#done < result.txt
#
#echo 
#if [ $wrong -eq 0 ]; then
#	echo "All tests passed!"
#else
#	echo "You failed $wrong tests"
#	echo "they are in the failed.txt file"
#fi
#
#echo "Clean up? (y/n)"
#read answer
#if [ "$answer" = "y" ]; then
#	rm -f ft_printf_test result.txt
#fi
#
#