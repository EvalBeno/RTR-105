#include <stdio.h>
#include <math.h>
#define N 100

double function(double x);
double Derivative(double x);
double dDerivative(double x);
//============================================

void WriteToFile(double x_value[N], double F_value[N], double d_analytical[N], double dd_analytical[N], double d_numerical[N], double dd_numerical[N], int i){
    
    FILE* input = fopen("derivative.dat", "w");
    
    fprintf(input ,"#x\t\tf(x)\t\tAnalytical'\tNumerical'\tAnalytical''\tNumerical''\n");
    fprintf(input ,"#-------------------------------------------------------------------------------------------\n");
    fprintf(input ,"%lf\t%lf\t%lf\t%lf\t%lf\t\t\n", x_value[0], F_value[0], d_analytical[0], d_numerical[0], dd_analytical[0]);
    for (int j=1; j<i; j++){
        fprintf(input, "%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x_value[j], F_value[j], d_analytical[j], d_numerical[j], dd_analytical[j], dd_numerical[j]);
    }
    fclose(input);
}

//==========================================

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
        dd_numerical[i]     =(d_numerical[i]-d_numerical[i-1])/delta;
        x=x+delta;
    }
    
    printf("x\t\tf(x)\t\tAnalytical'\tNumerical'\tAnalytical''\tNumerical''\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("%lf\t%lf\t%lf\t%lf\t%lf\t\t\n", x_value[0], F_value[0], d_analytical[0], d_numerical[0], dd_analytical[0]);
    for (int j=1; j<i; j++){
        printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x_value[j], F_value[j], d_analytical[j], d_numerical[j], dd_analytical[j], dd_numerical[j]);
    }
    
    WriteToFile(x_value, F_value, d_analytical, d_numerical, dd_analytical, dd_numerical, i);
    return 0;
}
//=========================================
double function(double x){
    return cos(x)*cos(x);
}

double Derivative(double x){
    return -sin(2*x);
}

double dDerivative(double x){
    return -2*cos(2*x);
}
