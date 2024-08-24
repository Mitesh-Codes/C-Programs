#include<stdio.h>

int main(){

    printf("Enter your age:");
    int age;
    scanf("%d",&age);
    switch (age)
    {
    case 18:
        printf("Eligible");
        break;
    case 17:
        printf("Not eligible");
        break;
    case 19:
        printf("Eligible");
        break;
    default:
        printf("IDK Man!!");
    }

    
    return 0;
}