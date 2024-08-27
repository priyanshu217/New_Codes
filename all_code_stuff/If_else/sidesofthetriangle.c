#include<stdio.h>
int main(){

    int a,b,c ;
    printf("Enter 1st number :");
    scanf("%d" , &a);
    printf("Enter 2st number :");
    scanf("%d" , &b);
    printf("Enter 3st number :");
    scanf("%d" , &c);

    if((a+b)>c && (b+c)>a && (c+a)>a){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }

    return 0;
}