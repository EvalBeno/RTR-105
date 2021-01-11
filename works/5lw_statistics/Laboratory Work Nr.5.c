#include <stdio.h>
#include <string.h>
#define N 30

char average(char string[N], int length);
char median(char string[N], int length);
char mode(char string[N], int length);

int main()
{
    char string[N];
    printf("Enter a word: ");
    scanf("%s", string);
    int length=strlen(string);
// Sorting algorithm    
    for(int i=0; i<length; i++){
        for(int j=0; j<length-1; j++){
            if(string[j]>string[j+1]){
                char temp=string[j+1];
                string[j+1]=string[j];
                string[j]=temp;
            }
        }
    }
    printf("The minimum value char is: %c\n", string[0]);
    printf("The maximum value char is: %c\n", string[length-1]);
    printf("The average value char is: %c\n", average(string, length));
    printf("The median value char is: %c\n", median(string, length));
    printf("The mode value char is: %c\n", mode(string, length));
    printf("The sorted string looks like this: %s\n", string);
    
    return 0;
}

char average(char string[N], int length){
    int sum=0;
    for(int i=0; i<length; i++){
        sum=sum+string[i];
    }
    return sum/length;
}

char median(char string[N], int length){
    return string[length/2];
}

char mode(char string[N], int length){
    int maxValue=0, maxCount=0;
    for(int i=0; i < length; i++){
        int count=0;
        for(int j=0 ; j<length ; j++){
            if(string[j] == string[i])
                count++;
        }
        if (count > maxCount){
            maxCount = count;
            maxValue = string[i];
        }
    }
    return maxValue;
}
