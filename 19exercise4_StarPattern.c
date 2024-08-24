#include <stdio.h>
int main()
{

    printf("Welcome to Star pattern!!");
    printf("Please select the type of pattern\n1.Triangular patter\n2.Reverse triangular pattern\nEnter(1 or 2):");
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        int num;
        printf("Enter the number the rows:");
        scanf("%d", &num);
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    if (a == 2)
    {
        int num;
        printf("Enter the number the rows:");
        scanf("%d", &num);
        for (int i = num; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}