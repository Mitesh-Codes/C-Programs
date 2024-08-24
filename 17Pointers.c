#include<stdio.h>

int main(){
    
    int a=76;
    int *ptra=&a;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The value of a is %d\n", *ptra);
    int *ptra2=NULL;
    printf("The adress of ptra2 is: %p", ptra2);
    


    return 0;
}