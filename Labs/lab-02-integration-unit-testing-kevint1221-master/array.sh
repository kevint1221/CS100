#!/bin/sh

INPUTS=("first input" "second input" "third input")

for input in "${INPUTS[@]}"
do
	echo "./c-echo ${input}"
  	output=$(./c-echo ${input})
#\ is used to ignore " after
	echo "Output: \"${output}\""
	
	echo "input: \"${input}\""
#output will become the INPUTS[i]
#we check if output match the input
	if [ "${output}" = "${input}" ]
	then
		echo "Test passed"
	else 
		echo "Test failed"
	fi
done

