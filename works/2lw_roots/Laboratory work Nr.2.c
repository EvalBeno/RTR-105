#include <stdio.h>
#include <math.h>

double function(double x, double c);

int main (){
    double a, b, c, precision, x;
    unsigned int t=0;
    
    printf("In the interval [a:b]\n");
    printf("Enter the a value: "); scanf("%lf", &a);
    printf("Enter the b value: "); scanf("%lf", &b);
    printf("The function f(x)=c\n");
    printf("Enter the c value: "); scanf("%lf", &c);
    printf("Enter the precision(ex. 0.0001): "); scanf("%lf", &precision);
    
    if(function(a, c)*function(b, c)>0){
        printf("The function value is not in the interval[%lf:%lf]\n", a, b);
        return 1;
    }
    if(b>a){
        while((function(b, c)-function(a, c))>precision){
            t++;
            x=(a+b)/2;
            if(function(a, c)*function(x, c)>0) a=x;
            else b=x;
            printf("At the %2u iteration: f(%.2lf)=%.2lf\n", t, x, function(x, c)+c);
        }
    }
    else{
        while((function(a, c)-function(b, c))>precision){
            t++;
            x=(a+b)/2;
            if(function(a, c)*function(x, c)>0) a=x;
            else b=x;
            printf("At the %2u iteration: f(%.2lf)=%.2lf\n", t, x, function(x, c)+c);
        }
    }
    printf("_______________________________________________\n");
    printf("Function f(%lf)=%lf, and it took %u iterations.\n", x, function(x, c)+c, t);
    
    return 0;
}

double function(double x, double c){
    return x-c;
}
