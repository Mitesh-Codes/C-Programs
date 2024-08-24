#include<stdio.h>

int main(){
    
    // int marks[4];
    // marks[0]=34;
    // printf("The marks of student 1 is %d",marks[3]);

    // int marks[4];
    // for (int i=0;i<4;i++){
    //     printf("Enter the marks of %d element of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }
    // for(int i=0;i<4;i++){
    //     printf("The marks of %d is %d\n",i,marks[i]);
    // }

    //2-D array

    int marks[2][4]={{23,43,53,54},
                     {25,11,64,33}};
    
    for (int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            //printf("The marks of %d %d is %d\n",i,j,marks[i][j]);
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}