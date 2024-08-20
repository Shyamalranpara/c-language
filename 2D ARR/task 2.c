#include <stdio.h>

main()
{
    int arr[3][3],sum=0;
    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=2; j++)
        {

        printf("enter value :");
        scanf("%d",arr[i][j]);

        sum += arr[i][j];


        }
        printf("\n");
    }
    printf("%d",sum);
    sum=0;
}