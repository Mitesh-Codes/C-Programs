#include<stdio.h>

int main(){

    int a;
    printf("Welcome to prize ceremony!\n");
    printf("Please tell if you won maths quiz or science quiz or both or neither\n");
    printf("enter 1 for winning maths and science quiz\n");
    printf("enter 2 for maths quiz only\n");
    printf("enter 3 for scince quiz only\n");
    printf("enter 4 for NOTA\n");
    scanf("%d",&a);
    if (a==1){
        printf("You have won choco & Pies");
    }
    else if(a==2){
        printf("You have won Choco only");
    }
    else if(a==3){
        printf("You have won Pies only");
    }
    else if(a==4){
        printf("JNL!");
    }
    
    return 0;

}