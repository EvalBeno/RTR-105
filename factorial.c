#include<stdio.h>

// 0! = 1;
// Ask user for one decimal number and datatype he would like to analyse - char, int or long long
// if possible calculate and output value of factorial for inserted number
// if it possible - means correct value can be obtained with this data type
// if correct value cannot be obtained write the command to user
// not allowed:
//      to use constants of ranges of datatypes
//      comparrison of result with 0 not allowed
//      taking of signs of results is not allowed

// Program should stop immediatly when not correct results begin

int main()
{
    printf("\nInput your datatype c-char i-int l-long : ");
    char datatype;
    scanf(" %c", &datatype);

if(datatype == 'c'){
        char in;
        printf("What is the number for your factorial: ");
        scanf("%d", &in);
         char factorial=1;
         for(int i=1 ; in >= i ; i++){
            factorial=factorial*i; // counts it
         }
         char czfactorial=1;
         for(int j=1 ; in-1 >= j ; j++){ // checks
            czfactorial=czfactorial*j;
         }
        if(in=factorial/czfactorial){
            printf("Your factorial is: %d", factorial);
        }
        else{
            printf("INVALID DATATYPE FOR THIS NUMBER!");
        }
    }
else if(datatype=='i'){
        int in;
        printf("What is the number for your factorial: ");
        scanf("%d", &in);
         int factorial=1;
         for(int i=1 ; in >= i ; i++){
            factorial=factorial*i; // counts it
         }
         int czfactorial=1;
         for(int j=1 ; in-1 >= j ; j++){ // checks
            czfactorial=czfactorial*j;
         }
        if(in=factorial/czfactorial){
            printf("Your factorial is: %d", factorial);
        }
        else{
            printf("INVALID DATATYPE FOR THIS NUMBER!");
        }
    }
else if(datatype=='l'){
        long long in;
        printf("What is the number for your factorial: ");
        scanf("%lld", &in);
         long long factorial=1;
         for(int i=1 ; in >= i ; i++){
            factorial=factorial*i; // counts it
         }
         long long czfactorial=1;
         for(int j=1 ; in-1 >= j ; j++){ // checks
            czfactorial=czfactorial*j;
         }
        if(in=factorial/czfactorial){
            printf("Your factorial is: %lld", factorial);
        }
        else{
            printf("INVALID DATATYPE FOR THIS NUMBER!");
        }
    }
    else{
        printf("\nIncorrect datatype!\n");
    }
    return 0;
}
