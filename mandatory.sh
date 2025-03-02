#!/bin/bash

cc ./examples/mandatory/teste.c -o mandatory_test -L../. -lftprintf
if [ $? -ne 0 ]; then
	echo "Compilation failed!"
	exit 1
fi

./mandatory_test > mandatory_output

if [ $? -ne 0 ]; then
	echo "Execution of mandatory failed!"
	exit 1
fi

# Check if required files exist
if [ ! -f "./examples/mandatory/examples.txt" ]; then
	echo "Error: examples.txt file not found!"
	exit 1
fi

if [ ! -f "./examples/mandatory/went_wrong.txt" ]; then
	echo "Error: went_wrong.txt file not found!"
	exit 1
fi


mapfile -t expected_outputs < ./examples/mandatory/examples.txt
mapfile -t test_lines < ./examples/mandatory/went_wrong.txt

declare -i line_number=0
declare -i wrong=0
declare -i right=0

printf "\n%-40s | %-40s | %-4s\n" "ACTUAL OUTPUT" "EXPECTED OUTPUT" "STATUS"
printf "%-40s-+-%-40s-+-%-4s\n" "$(printf '─%.0s' {1..40})" "$(printf '─%.0s' {1..40})" "$(printf '─%.0s' {1..4})"

while IFS= read -r result_line; do
	if [ "$line_number" -lt "${#expected_outputs[@]}" ]; then
		expected_line="${expected_outputs[$line_number]}"
	else
		expected_line=""
	fi
	if [ "$result_line" = "$expected_line" ]; then
		status="OK"
		color="\033[32m"  
		right=$((right + 1))
	else
		status="KO"
		color="\033[31m"  
		wrong=$((wrong + 1))
		echo "${test_lines[$line_number]}" >> failed.txt
	fi

	printf "%-40s | %-40s | ${color}%-4s\033[0m\n" "$result_line" "$expected_line" "$status"

	line_number=$((line_number + 1))
	sleep 0.05
done < mandatory_output

echo
if [ "$wrong" -eq 0 ]; then
	echo -e "\033[32mAll tests passed!\033[0m"
else
	echo -e "\033[31mYou failed $wrong tests. Check failed.txt for details.\033[0m"
fi
