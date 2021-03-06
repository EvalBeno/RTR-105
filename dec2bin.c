#include <stdio.h>

int main()
{
    unsigned char num;
    printf("Enter an intiger to print a binary number: ");
    scanf("%d", &num);
    unsigned const char PRIMARYNUM=num;
    int bin[8]={0, 0, 0, 0, 0, 0, 0, 0};

    unsigned char tempnum=num;

    while(num!=0){
        tempnum=num;
        int place=0;
        while(tempnum!=1 && tempnum!=0){ // Finds the most significant bit of the number
            tempnum=tempnum>>1;
            place++;
        }
        bin[place]=1; //Writes the bit in the place where it is supposed to be

        tempnum=tempnum<<place;
        place=0;

        num=num-tempnum;//subtracts the bit
    }

    printf("\n%d = ", PRIMARYNUM);

    for(int print=7;print>=0;print--){
        printf("%d",bin[print]);
    }

    return 0;
}
