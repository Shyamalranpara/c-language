#include <stdio.h>
main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("number of arr[%d] : %d\n",i,arr[i]);
    }
    main();
}