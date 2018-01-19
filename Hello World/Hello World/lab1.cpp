#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int c, d, e;
	if (a>b) return gcd(b, a);
	d = a;
	for (d = a; d>1; d--) {
		for (c = d, e = 0; c<b; e++, c*=e); // *= mistake
		if (c = b) return d;
	} return 1;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	/*int rep, prv, tmp, sum;
	for (rep = sum = 1, prv = 0;
		rep < n;
		tmp = sum, sum += sum + prv, prv = tmp, rep++);
	return (long long)sum;*/
	if (n == 1) return 1;
	if (n < 1) return 0;
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
