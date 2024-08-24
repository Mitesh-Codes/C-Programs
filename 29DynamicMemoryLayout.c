#include<stdio.h>
#include<stdlib.h>


int main(){
    
    // int*ptr;
    
    // ptr=(int*) malloc(3*sizeof(int));
    
    // for(int i=0;i<3;i++){
        
    //     printf("Enter the value no. %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i=0;i<3;i++){
        
    //     printf("The value at %d of this array is %d\n",i,ptr[i]);
    // }  


    int*ptr;
    
    ptr=(int*) calloc(3,sizeof(int));
    
    for(int i=0;i<3;i++){
        
        printf("Enter the value no. %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<3;i++){
        
        printf("The value at %d of this array is %d\n",i,ptr[i]);
    } 


    
    
    ptr=(int*) realloc(ptr,5*sizeof(int));
    
    for(int i=0;i<5;i++){
        
        printf("Enter the new value no. %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        
        printf("The new value at %d of this array is %d\n",i,ptr[i]);
    }
    free(ptr);
    
    return 0;
}