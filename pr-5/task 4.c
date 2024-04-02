#include <stdio.h>
main()
{
    int size, row, column, sum;
    printf("Enter size of 2d array : ");
    scanf("%d", &size);
    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter number for arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter row number : ");
    scanf("%d", &row);
    printf("Elements of row %d : ", row);

    for (int j = 0; j < size; j++)
    {
        printf("%d ", arr[row][j]);
        sum += arr[row][j];
    }

    printf("\nThe sum of a row %d : %d \n", row ,sum);
    sum = 0;
    printf("Enter column number : ");
    scanf("%d", &column);
    printf("Elements of column %d : ", column);

    for (int j = 0; j < size; j++)
    {
        printf("\n%d", arr[j][column]);
        sum += arr[j][column];
    }
    
    printf("\nThe sum of a column %d : %d \n", column ,sum);
    main();
}