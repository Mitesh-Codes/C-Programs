#include<stdio.h>

int func1(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i,array[i]);
    }
    //array[0]=54; Changes Value in original array
    
}
void func2(int *ptr){
     for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i,*(ptr+i));
    }
    *(ptr+2)=44;
}

int main(){
    
    
    int arr[]={34,24,67,4};
    // printf("The value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n",arr[0]);

    func2(arr);
    func2(arr);
    
    return 0;
}