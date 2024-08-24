#include<stdio.h>
void ChangeValue(int *a,int *b){
    int j,j2;
    j=(*a+*b);
    j2=(*a-*b);
    *a=j;
    *b=j2;
    return ;
}
int main(){
    
    // int a=34 ,b=36;
    // printf("the value of a now is %d\n",a);
    // ChangeValue(&a);
    // printf("the value of a now is %d\n",a);
    // return 0;

    int a=34 ,b=30;
    ChangeValue(&a,&b);
    printf("the value of a now is %d\n",a);
    printf("the value of b now is %d\n",b);
    return 0;
}
