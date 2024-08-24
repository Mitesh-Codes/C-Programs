#include<stdio.h>
//#include"2sum.c"

int myfun(int a,int b){
    //auto int sum;
    extern int sum;
    sum=a+b;
    return sum;
}
//int sum=5;

int main(){
    
    register sum=myfun(3,5);
    //sum=9;
    printf("the sum is %d",sum);
    
    return 0;
}