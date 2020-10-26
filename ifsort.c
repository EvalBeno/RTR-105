#include<stdio.h>

void numbers();
void letters();

int main()
{
    printf("Do you want to sort numbers\"n\" or letters \"l\"");
    char parameter;
    scanf(" %c", &parameter);
        if(parameter=='n')numbers();
        else if(parameter=='l')letters();
        else printf("INVALID PARAMETER\n");
    return 0;
}

void numbers(){
    int a, b, c;
    char parameter;
    printf("Input three numbers to sort: ");
    scanf(" %d%d%d ", &a, &b, &c);
    printf("How do you want to sort them: \n \"a\" for accending \"d\" for decending sorting.\n");
    scanf(" %c", &parameter);
    if(parameter=='d'){
        if(a>=b && a>=c){
            printf("%d", a);
            if(b>=c){
                printf("%d%d", b, c);
            }else{
                printf("%d%d", c, b);
            }
        }else if(b>=a && b>=c){
            printf("%d", b);
            if(a>=c){
                printf("%d%d", a, c);
            }else{
                printf("%d%d", c, a);
            }
        }else{
            printf("%d", c);
            if(a>=b){
                printf("%d%d", a, b);
            }else{
                printf("%d%d", b, a);
            }
        }
    }else if(parameter=='a'){
        if(a<=b && a<=c){
            printf("%d", a);
            if(b<=c){
                printf("%d%d", b, c);
            }else{
                printf("%d%d", c, b);
            }
        }else if(b<=a && b<=c){
            printf("%d", b);
            if(a<=c){
                printf("%d%d", a, c);
            }else{
                printf("%d%d", c, a);
            }
        }else{
            printf("%d", c);
            if(a<=b){
                printf("%d%d", a, b);
            }else{
                printf("%d%d", b, a);
            }
        }
    }
    else{
        printf("INVALID SORTING\n");
    }
}
void letters(){
    char a, b, c;
    char parameter;
    printf("Input three letters to sort: ");
    scanf(" %c %c %c", &a, &b, &c);
    printf("How do you want to sort them: \n \"a\" for accending \"d\" for decending sorting.\n: ");
    scanf(" %c", &parameter);
    if(parameter=='a'){
        if(a>=b && a>=c){
            printf("%c", a);
            if(b>=c){
                printf("%c%c", b, c);
            }else{
                printf("%c%c", c, b);
            }
        }else if(b>=a && b>=c){
            printf("%c", b);
            if(a>=c){
                printf("%c%c", a, c);
            }else{
                printf("%c%c", c, a);
            }
        }else{
            printf("%c", c);
            if(a>=b){
                printf("%c%c", a, b);
            }else{
                printf("%c%c", b, a);
            }
        }
    }
    else if(parameter=='d'){
        if(a<=b && a<=c){
            printf("%c", a);
            if(b<=c){
                printf("%c%c", b, c);
            }else{
                printf("%c%c", c, b);
            }
        }else if(b<=a && b<=c){
            printf("%c", b);
            if(a<=c){
                printf("%c%c", a, c);
            }else{
                printf("%c%c", c, a);
            }
        }else{
            printf("%c", c);
            if(a<=b){
                printf("%c%c", a, b);
            }else{
                printf("%c%c", b, a);
            }
        }

    }else{
        printf("INVALID SORTING\n");
    }
}
