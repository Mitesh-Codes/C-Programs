#include <stdio.h>
#include <math.h>
float kmstom(float a)
{
    return a * 0.62137;
}
void inctoft(float b)
{
    int f1 = b / 12;
    float f2 = fmod(b, 12);
    printf("%d feet %2.1f inches\n", f1, f2);
}
float cmtoinch(float c)
{
    return c * 0.3937;
}

int main()
{

    printf("  $$      Welcome to the conversion program      $$\n");
    printf("Please select the conversion type\n");
    printf("1.Kilometres to miles\n2.inches to foot\n3.centimetres to inches\n Press any negative number to exit\n");
    int num;
    do
    {

        scanf("%d", &num);

        if (num == 1)
        {
            printf("Kilometres=");
            float kms;
            scanf("%f", &kms);
            printf("Miles=%f\n", kmstom(kms));
            printf("Please select the conversion type\n");
        }
        if (num == 2)
        {
            printf("Inches=");
            float inch;
            scanf("%f", &inch);
            inctoft(inch);
            printf("Please select the conversion type\n");
        }
        if (num == 3)
        {
            printf("Centimeteres=");
            float cms;
            scanf("%f", &cms);
            printf("inches=%f\n", cmtoinch(cms));
            printf("Please select the conversion type\n");
        }

    } while (num > 0);

    return 0;
}