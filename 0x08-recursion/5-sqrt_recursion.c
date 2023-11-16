#include "main.h"
int sqr1(int n, int i);

/**
  *_sqrt_recursion - finds sqrt of a num
  *@n: num
  *Return: sqr1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqr1(n, (n + 1) / 2));
}

/**
  *sqr1 - checks if perfect square
  *@n: input
  *@i: checker
  *Return: if perfect sqr
  */
int sqr1(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqr1(n, i - 1));
}

