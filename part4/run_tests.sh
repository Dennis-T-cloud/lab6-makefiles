#!/bin/bash

# Initialize some variables to be used in the loop
num_tests=0
num_failed=0
failed_tests=""

# Iterate over all files given in the args
for file in "$@"; do
    # Parse filename
    base=$(basename $file .txt)
    # Define output filename
    diff_out="results/${base}_diff.txt"
    
    # Test your program output against ref
    diff <(./webster < $file) \
         <(./ref-webster < $file) \
         > $diff_out

    # diff returns with a non-zero exit code if there is a difference
    # Check for a non-zero exit code to indicate a test failure
    if [ $? -ne 0 ]
    then
        # Log failed test case
        num_failed=$((num_failed+1))
        failed_tests="${failed_tests}\t${base}\n"
    else
        # If test passes, clean up empty diff file
        rm $diff_out
    fi

    # Count how many tests are run
    num_tests=$((num_tests+1))
done

# If there were no failed tests, report success
if [ $num_failed -eq 0 ]
then
    printf "All ${num_tests} tests passed!\n"
# Else: there was at least one failed test,
# then give report of # of failed tests
else
    printf "Failed ${num_failed} out of ${num_tests} tests:\n${failed_tests}"
fi

