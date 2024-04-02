#include <stdio.h>
void main()
{
    int size,large=0;

    printf("enter array row size");
    scanf("%d", &size);
      printf("enter array col size");
    scanf("%d", &size);
    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("enter elements[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
   for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
          if (arr[i][j]>large)
          {
            large=arr[i][j];
          }
          
        }
    }
    printf("%d",large);
 
}