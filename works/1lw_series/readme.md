
Lab. Work No.1 Taylor Series  
=

Source is free and available at https://github.com/EvalBeno/RTR-105/


Purpose
==


This directory contains the code for calculating squared cosine for the function
===

The code derived from this equation:![equation](Equation.jpg)

However if we're using this function directly you will **run out of memory** because the factorial in the denominator will make the function to have an overflow. To avoid this we can augment the each value for the sum to use an a value from the equation before like this:

![augequation](AugEq.jpg)

This equation finds the each value for the sum function to well, sum. The recursive function was found by dividing current value of a by last value of a like this:

![findingeq](foundEq.jpg)

Code for the function:
==
```
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ASCII(){
    printf("\n\n--------------------------------------\n");
    printf("|           500                      |\n");
    printf("|         -------                    |\n");
    printf("|          \\         k  2k  2k-1     |\n");
    printf("|    2      \\    (-1) *x  *2         |\n");
    printf("| cos (x)=    >  -----------------   |\n");
    printf("|           /          (2k)!         |\n");
    printf("|          /                         |\n");
    printf("|         -------                    |\n");
    printf("|           k=1                      |\n");
    printf("--------------------------------------\n\n");
    }       


double Squared_Cosine(double x, int sumof);

//=================================================================
int main()
{
    double x, funcy, S;
    int const sumof=500;
    printf("\t\t\tSQUARED COSINE CALCULATOR USING TAYLOR SERIES\t\n");
    printf("Enter value of x: ");
    scanf("%lf", &x);
    funcy=cos(x)*cos(x);
    ASCII();
    S=Squared_Cosine(x,sumof);
    printf("   2\ncos (%lf)= %.15lf\n", x, funcy);
    printf("Algorihtm Value: %.15lf\n", S);
    
    return 0;
}
//==================================================================

double Squared_Cosine(double x, int sumof)
{
    int k=2;
    double a=0, S=0;
    a=-pow(x,2);
    S=S+a;
    while(k<=sumof){
        a=a*(-1)*4*pow(x,2)/(2*k*(2*k-1)); 
        S=a+S;
        if(sumof-1==k) printf("a%d=%.15lf\n", k, a);
        if(sumof==k) printf("a%d=%.15lf\n", k, a);
        k++;
        }
    S=1.0+S;
    return S;
}
```
The function Squared_Cosine() works like this:  
* Firstly the Squared_Cosine() takes two variables the number which needs to be calculated, and order of taylor polynomial
* Then the function calculates the first member to sum, and sets the k(times to run the program to 2).
* In the while loop it calculates all the members(a) and then sums up to sum(S), it runs until k reaches the sum of value.  
*In the while loop there is if() statements, those are to show penultimate value and ultimate value, these are completely unnecessary and can be removed*
* Then to correct the results since the cos^2 is shifted a bit upwards you just add 1


Using the Taylor Series method we can make a function which aproximates the squared cosine value fairly accurately as it can be seen in this graph:
===

![Graph](Graph.png)

**Thus meaning that we can use simple mathematical operations to find a value of a squared cosine.**

Benefits of using this function:
====
If you know that your values which you plug in the function will be small, then you can optimize the function to sum up less members of the ∑ mathematical function. For values below 1 you can just sum up 3 taylor series polynomials significantly reducing the time that calculation takes place.

Example: Computer games need to do a lot of computations for each frame and instead of using in cos() function from c standart library you can create your own to save some time for it to calculate the squared cosine.

Usage
==

To compile use:`gcc Laboratory\ work\ Nr.1.c -lm`

After you launch the function it looks like this
==
```
                        SQUARED COSINE CALCULATOR USING TAYLOR SERIES
Enter value of x: 3  


--------------------------------------
|           500                      |
|         -------                    |
|          \         k  2k  2k-1     |
|    2      \    (-1) *x  *2         |
| cos (x)=    >  -----------------   |
|           /          (2k)!         |
|          /                         |
|         -------                    |
|           k=1                      |
--------------------------------------

a499=-0.000000000000000
a500=0.000000000000000
   2
cos (3.000000)= 0.980085143325183
Algorihtm Value: 0.980085143325182

```

There is also source code for the graphs made to use it:
====

To be able to use it you must have GNUPLOT installed.

Type in terminal:  
`gnuplot`  
And when you are inside GNUPLOT program type in:  
`load 'gnuplotscript.p'`  



*This project was made as part of computer studies class in Riga Techincal University*
