#include <stdio.h>

int main()
{
	double a, b;
	printf("Enter the multiplier (40,000): ");
	scanf("%lf", &a);
	printf("Enter the multiplicand (10,000): ");
	scanf("%lf", &b);
    printf("Solution is: %.0lf", a*b);
    return 0;
}
