#include<stdio.h>

void print();
int scan();
int power2(int num);
void printAns(int ans);

int main ()
{
    print();
    printAns(power2(scan()));


    return 0;
}

void print(){
    printf("Enter a number to raise to the power of 2: ");
}

int scan(){
    int num=0;
    scanf("%d", &num);
    return num;
}

int power2(int num){
    num=num*num;
    return num;
}
void printAns(int ans){
    printf("Your answer is: %d", ans);
}
