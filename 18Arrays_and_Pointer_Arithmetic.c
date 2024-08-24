#include<stdio.h>
int main(){
    
    // int a=34;
    // int*ptra=&a;
    // printf("%d\n",ptra);
    // printf("%d\n",ptra+1);

    // char b='3';
    // char *ptra1=&b;
    // printf("%d\n",ptra1);
    // ptra1++;
    // printf("%d\n",ptra1);
    // printf("%d",ptra1-2);

    int arr[]={1,2,3,4,5,6,67};
    printf("%d\n",arr[3]);
    printf("%d\n", &arr[0]);
    printf("%d\n", &arr[1]);
    printf("%d\n", arr+1);

    printf("%d\n\n", *(&arr[0]));
    
    printf("%d\n", *(&arr[1]));
    printf("%d\n", *(arr+1));
    printf("%d\n", arr[1]);
    

    
    return 0;
}