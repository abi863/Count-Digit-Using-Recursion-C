# Count Digit Occurrences Using Recursion in C

## Description

This C program uses recursion to count how many times a given digit occurs in a positive integer.

## Concepts Used

* Recursion
* Functions
* Modulus operator
* Integer division
* Conditional statements

## Approach

The recursive function checks the last digit of the number. If it matches the given digit, the count increases by one. The function then removes the last digit and calls itself until the number becomes zero.

## Sample Input

Number: `12232`
Digit: `2`

## Sample Output

`Digit 2 occurs 3 times.`

## Time Complexity

O(d), where d is the number of digits.

## Language

C
