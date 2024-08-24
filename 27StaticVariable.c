#include<stdio.h>
int func1(int b){
    static int myvar;
    printf("The value of myvar is %d\n",myvar);
    myvar++;
}
int ret(){
    return 9*3;
}
int main(){
    
    int b=34;
    int val=func1(b);
    val=func1(b);
    //static int mm=ret();         This is wrong!!!!
    
    return 0;
}