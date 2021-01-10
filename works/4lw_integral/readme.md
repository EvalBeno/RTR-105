
Lab. Work No.4 Numerical Integral
=

Source is free and available at https://github.com/EvalBeno/RTR-105/


Purpose
==

Code for this method:
===

```
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
```

Usage
==

To compile use:`gcc Laboratory\ work\ Nr.4.c -lm`


After you launch the program in terminal it shows this
==
```
Enter the begining of the interval: 0   
Enter the ending of the interval: 1
Enter the precision: .2
Integral calculated by analytical rule: 0.727324
Integral calculated by rectangle rule: 0.769997
Integral calculated by trapezoidal rule: 0.766608
Integral calculated by simpsons rule: 0.768867
```



*This project was made as part of computer studies class in Riga Techincal University*
