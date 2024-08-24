#include<stdio.h>
int main(){
    
    printf("       ********Matrix Multiplication*********\n");
    printf("Please enter the number of rows of matrix A:");
    int rowA;
    scanf("%d",&rowA);
    printf("Please enter the number of Columns of matrix A:");
    int colA;
    scanf("%d",&colA);

    int a[rowA][colA];

    printf("Please enter the number of rows of matrix B:");
    int rowB;
    scanf("%d",&rowB);
    printf("Please enter the number of Columns of matrix B:");
    int colB;
    scanf("%d",&colB);
    int b[rowB][colB];
    int sum=0;

    int result[colA][rowB];


    if (colA!=rowB)
    {
        printf("Multiplication between these two matrices is invalid");
    }
    else{

        printf("Enter the elements of Matrix A\n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
            {
                printf("Enter the element %d %d of Matrix A\n",i,j);
                scanf("%d",&a[i][j]);
            }
            
        }
        printf("Enter the elements of Matrix B\n");
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                printf("Enter the element %d %d of Matrix B\n",i,j);
                scanf("%d",&b[i][j]);
            }
            
        }

        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                for (int k= 0; k <rowB ; k++)
                {
                    sum+= a[i][k]*b[k][j];
                }
                result[i][j]=sum;
                sum=0;

                
            }
            
        }
        printf("The Result is:\n");
        for (int i = 0; i < rowA; i++)
        {
            for(int j=0;j<colB;j++){
                printf("%d \t",result[i][j]);
            }
            printf("\n");
        }
        

    }
    

    
    return 0;
}