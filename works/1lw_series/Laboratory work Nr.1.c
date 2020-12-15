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
//                  2  
//            (-4)*x 
// a =a   * -----------
//  k  k-1   2k*(2k-1)
