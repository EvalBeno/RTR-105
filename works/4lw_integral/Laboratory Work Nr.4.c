#include <stdio.h>
#include <math.h>

float f(float x){
    return cos(x)*cos(x);
}
float integral(float a, float b){
    return (((sin(2*b)/2)+b)/2)-(((sin(2*a)/2)+a)/2);
}
float rectangle(float a, float b, float eps);
float trapezoidal(float a, float b, float eps);
float simpsons(float a, float b, float eps);

int main(){
    float a, b, eps=0.01;
    
    printf("Enter the begining of the interval: "); scanf("%f", &a);
    printf("Enter the ending of the interval: ");   scanf("%f", &b);
    printf("Enter the precision: ");                scanf("%f", &eps);
    
    printf("Integral calculated by analytical rule: %f\n",      integral(a, b));
    printf("Integral calculated by rectangle rule: %f\n",       rectangle(a, b, eps));
    printf("Integral calculated by trapezoidal rule: %f\n",     trapezoidal(a, b, eps));
    printf("Integral calculated by simpsons rule: %f\n",        simpsons(a, b, eps));
    
    return 0;
}


float rectangle(float a, float b, float eps){
    float an, Area, tArea;
    while(an<=b){
        an=a+eps;
        tArea=(an-a)*f((a+an)/2);
        Area=Area+tArea;
        a=an;
    }
    return Area;
}

float trapezoidal(float a, float b, float eps){
    float an, Area, tArea;
    while(an<=b){
        an=a+eps;
        tArea=(an-a)*((f(a)+f(an))/2);
        Area=Area+tArea;
        a=an;
    }
    return Area;
}

float simpsons(float a, float b, float eps){
    float an, Area, tArea;
    while(an<=b){
        an=a+eps;
        tArea=((an-a)/6)*(f(a)+4*f((a+an)/2)+f(an));
        Area=Area+tArea;
        a=an;
    }
    return Area;
}
