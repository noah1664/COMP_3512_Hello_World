#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int y;
	int x;
	if (a < b) {
		x = a;
	} else {
		x = b;
	}
	y = x;
	while (x % y != 0) {
		x--;
	}
	
	return x;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n == 1) {
		return 1;  
	}
	if (n == 0) {
		return 0;
	}

	return fibonacci(n-1) + fibonacci(n-2);
	
}
