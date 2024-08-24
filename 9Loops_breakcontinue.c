#include<stdio.h>

int main(){

    // int i=0;
    // do{
    //     i++;
    //     printf("%d\n",i);
    // }while(i<10);

    // return 0;

    // int i=0;
    // while(i<10){
    //     printf("%d\n",i+1);
    //     i++;
    // }

    // int i=0,j=0;
    // for (; i<5; i++)        
    // {       
    //     printf("%d%d\n",i,j);
        
    // }

    int i,age;
    for(i=0;i<10;i++){
        printf("%d\nEnter your age:",i);
        scanf("%d",&age);
        if(age<5){
            break;
        }
        if(age>10){
            continue;
        }
        printf("We have come across any continue statement");
    }
    return 0;


    
}