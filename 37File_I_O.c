#include<stdio.h>
int main(){
    
    FILE *ptr=NULL;
    char string[34]="This content was write by a code";

    //****Reading a file******
    // ptr=fopen("37.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);

    //****Writing a file******
    ptr=fopen("37.txt","a");
    fprintf(ptr,"%s",string);
    fclose(ptr);

    
    return 0;
}