#include<stdio.h>
#include<stdlib.h>

// int*myFunc(){
//     int a,b,sum;
//     a=34;
//     b=54;
//     sum=a+b;
//     return &sum;
// }

int main(){
    
//Void Pointer  
    // int a=345;
    // float b=8.3;
    // void *ptr;
    // ptr=&a;
    // printf("The value of a is %d\n",*((int*)ptr));

//Null Pointer
    // int a=34;
    // int *ptr=NULL;
    // //ptr=&a;
    // printf("The value of a is %d\n",ptr);

//Dangling Pointer
    //Case1
    // int *ptr=(int*)malloc(3*sizeof(int));
    // ptr[0]=12;
    // ptr[1]=23;
    // ptr[2]=44;
    // free(ptr);
    
    //Case2
    //int *dangptr=myFunc();

    //Case3
    // int *ptr;
    // {
    //     int a=54;
        
    // }
    // //ptr=&a;
    // printf("%d",*ptr);


//WildPointer
    int a=3;
    int *ptr;  //This is a wild pointer
    //*ptr =34;  //This is not a good thing to do
    ptr=&a;    //ptr is not longer a wild pointer

    
    
    return 0;
}