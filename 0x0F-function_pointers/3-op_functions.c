#include "3-calc.h"
int op_add(int s, int k);
int op_sub(int s, int k);
int op_mul(int s, int k);
int op_div(int s, int k);
int op_mod(int s, int k);

/**
* op_add - Returns the sum of two numbers.
* @s: The first number.
* @k: The second number.
* Return: The sum of s and k.
*/

int op_add(int s, int k)
{
	return (s + k);
}

/**
* op_sub - Returns the difference of two numbers.
* @s: The first number.
* @k: The second number.
* Return: The difference of s and k.
*/

int op_sub(int s, int k)
{
	return (s - k);
}

/**
* op_mul - Returns the product of two numbers.
* @s: The first number.
* @k: The second number.
* Return: The product of s and k.
*/

int op_mul(int s, int k)
{
	return (s * k);
}

/**
* op_div - Returns the division of two numbers.
* @s: The first number.
* @k: The second number.
* Return: The quotient of s and k.
*/

int op_div(int s, int k)
{
	return (s / k);
}

/**
* op_mod - Returns the remainder of the division of two numbers.
* @s: The first number.
* @k: The second number.
* Return: The remainder of the division of s by k.
*/

int op_mod(int s, int k)
{
	return (s % k);
}
