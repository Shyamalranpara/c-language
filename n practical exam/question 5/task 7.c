
#include <stdio.h>
void main()
{
    int number = 100, k = 19;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", number);
        }
        printf("\n");
        number -= k;
        k -= 2;
    }
}
