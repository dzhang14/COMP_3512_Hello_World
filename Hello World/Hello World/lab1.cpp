#include "lab1.h"

// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	if (a == 0 || b == 0)
		return 0;

	// base case
	if (a == b)
		return a;

	// a is greater
	if (a > b) {
		return gcd(a - b, b);
	}
	return gcd(a, b - a);
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n == 0 || n == 1) {
		return n;
	}

	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
