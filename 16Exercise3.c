#include<stdio.h>

// int fib(int a1){
//     if (a1==0||a1==1){
//         return a1;
//     }
//     else{
//         return (fib(a1-1)+fib(a1-2));
//     }
// }

 int main(){

    int num;
    printf("upto what fibocanni number you want:");
    scanf("%d",&num);
    int a=0,b=1,c;
    for(int i=1; i<=num;i++){
        c=a+b;
        printf("%d\n",a);
        a=b;
        b=c;
       
        
    }

    // int a;
    // printf("Enter a number upto which you want fibonacci series:");
    // scanf("%d",&a);
    // for(int i=0;i<=a;i++){
    //     printf("%d\n",fib(i));
    // }

    // here recursive approach is slow than iterative approach.


    return 0;
 }