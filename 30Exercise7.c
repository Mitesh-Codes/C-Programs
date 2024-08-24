#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
    
    int ii;
    char*ptr;
    //ptr[ii]=(char*)calloc(ii,sizeof(char));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the total no. of characters in your ID:");
        scanf("%d",&ii);
        ptr=(char*)calloc(ii+1,sizeof(char));
        printf("Enter the ID no.%d:",i);
        scanf("%s",ptr);
        printf("The value of ID no.%d is %s\n",i,ptr);
        free(ptr);
    }
    

     
    

    
    return 0;
}