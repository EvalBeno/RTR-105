#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ASCII(double S){
    printf("          500                    \n");
    printf("        -------                  \n");
    printf("        \\                 2     \n");
    printf("         \\        a   (-1) * x  \n");
    printf("           >     ____k-1_________ = %lf\n", S);
    printf("         /          2k(2k+1)     \n");
    printf("        /                        \n");
    printf("        -------                  \n");
    printf("          k=0                    \n");
    }
double My_Sinus(double x, int t);
//=================================================================
int main()
{
    double x, funcy, seriesy, S;
    int t=500;
    printf("\t\t\tSINE CALCULATOR USING TAYLOR SERIES\t\n");
    printf("Enter value of x: ");
    scanf("%lf", &x);/*
    printf("Enter precision value: ");
    scanf("%d", &t);*/
    funcy=sin(x);
    ASCII(My_Sinus(x,t));
    printf("\t\t\tsin(%lf)=%lf\n", x, funcy);

    return 0;
}
//==================================================================

double My_Sinus(double x, int t)
{
    int k=0;
    double a, S;
    a=pow(-1,k)*pow(x,2*k+1)/(1.);
    S=a;
    printf("S0=%lf\ta0=%lf\n", S, a);

    while (k<t){
        k++;
        a=a*(-1)*x*x/((2*k)*(2*k+1));
        S=S+a;
        printf("S%3d=%lf\ta%3d=%lf\n", k, S, k, a);
    }
    return S;
}
