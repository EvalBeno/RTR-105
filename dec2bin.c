#include <stdio.h>

int main()
{
    char num;
    printf("Enter an intiger to print a binary number: ");
    scanf("%d", &num);
    const char PRIMARYNUM=num;
    int bin[8]={0, 0, 0, 0, 0, 0, 0, 0};

    char tempnum=num;

    while(num!=0){
        tempnum=num;
        int place=0;
        while(tempnum!=1 && tempnum!=0 && tempnum !=-1){ // Finds the most significant bit of the number
            tempnum=tempnum>>1;
            place++;
        }
        bin[place]=1; //Writes the bit in the place where it is supposed to be

        while(place>0){ //returns the bit with 0-s behind it to original place
            tempnum=tempnum<<1;
            place--;
        }
        num=num-tempnum;//subtracts the bit
    }

    printf("\n%d = ", PRIMARYNUM);

    for(int print=7;print>=0;print--){
        printf("%d",bin[print]);
    }

    return 0;
}

/*
It is buggy with numbers 192 and above, dont know why but for numbers bellow it it didn't seem to show any problems
*/
