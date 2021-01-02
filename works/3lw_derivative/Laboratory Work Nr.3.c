#include <stdio.h>
#include <math.h>
#define N 100

double function(double x);
double Derivative(double x);
double dDerivative(double x);

int main(){
    double a, b, delta, x;
    double F_value[N],d_analytical[N], dd_analytical[N], d_numerical[N], dd_numerical[N], x_value[N];
    printf("a\tb\tdelta\n");
    scanf("%lf%lf%lf", &a, &b, &delta);
    
    x=a;
    int i=0;
    for ( ; x<b; i++){
        x_value[i]          =x;
        F_value[i]          =function(x);
        d_analytical[i]     =Derivative(x);
        dd_analytical[i]    =dDerivative(x);
        d_numerical[i]      =(function(x+delta)-function(x))/delta;
        dd_numerical[i]     =(function(d_numerical[i]+delta)-function(d_numerical[i]))/delta;
        x=x+delta;
    }
    
    printf("x\t\tf(x)\t\tAnalytical'\tNumerical'\tAnalytical''\tNumerical''\n");
    printf("-------------------------------------------------------------------------------------------\n");
    for (int j=0; j<i; j++){
        printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x_value[j], F_value[j], d_analytical[j], d_numerical[j], dd_analytical[j], dd_numerical[j]);
    }
    return 0;
}

double function(double x){
    return cos(x)*cos(x);
}

double Derivative(double x){
    return -sin(2*x);
}

double dDerivative(double x){
    return -2*cos(2*x);
}
