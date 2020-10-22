#include <stdio.h>

int main()
{
	long int a, b;
	printf("Enter the multiplier (40,000): ");
	scanf("%ld", &a);
	printf("Enter the multiplicand (10,000): ");
	scanf("%ld", &b);
    printf("Solution is: %ld", a*b);
    return 0;
}
