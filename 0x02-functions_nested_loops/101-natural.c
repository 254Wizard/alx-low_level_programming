/*
 * File: 101-natural.c
 * Auth: 254Wizard
 */

#include <stdio.h>
/**
 * main - a function that lists all the natural numbers below 1024
 * (excluded) that are multiples of 3 or 5.
 * Return: Always 0
 */
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; i++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
