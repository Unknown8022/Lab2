#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	printf("Enter x, N:");
	double a = 1.0, S = 0.0, x;
	int n = 0, N;
	scanf("%lf", &x);
	scanf("%d", &N);
	double y = cosh(x);
	while (n <= N)
	{
		S += a;
		double q = (x * x) / (2.0 * n + 2.0) * (2.0 * n + 1.0);
		a *= q;
		n++;
	}
	printf("y= %.5f\n", y);
	printf("S= %.5f\n", S);
	return 0;
}
