#include <stdio.h>

main()
{
    int a,b,c;

    printf("Enter a value of the first number :");
    scanf("%d",&a);
    printf("Enter a value of the second number :");
    scanf("%d",&b);
    printf("Enter a value of the third number :");
    scanf("%d",&c);

    if (a < b)
    {
        if (a < c)
        {
            printf("Minimum number is : %d", a);
        }

        else
        {
            printf("Minimum number is : %d", c);
        }
    }

    else
    {
        if (b < c)
        {
            printf("Minimum number is : %d", b);
        }

        else
        {
            printf("Minimum number is : %d", c);
        }
    }
}