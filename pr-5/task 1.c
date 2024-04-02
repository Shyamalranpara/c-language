#include <stdio.h>

main()
{
    int size;
    printf("Enter the size of arr : ");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number for arr[%d]: ",i);
        scanf("%d\n",&arr[i]);
    }
     printf("elements from an arr:"); 
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
        printf("\nNegative elements from an arr:");
  for (int i = 0; i < size; i++)
  {
    if (arr[i]<0)
    {
       printf("%d\n",arr[i]);
    }

  }
  main();
}

