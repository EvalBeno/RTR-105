#include <stdio.h>

int main()
{
	unsigned long int a, b;
	printf("Enter the multiplier (40,000): ");
	scanf("%lu", &a);
	printf("Enter the multiplicand (10,000): ");
	scanf("%lu", &b);
    printf("Solution is: %lu", a*b);
    return 0;
}
