#include <stdio.h>

main()
{
    int first=10;
    int second=20;

    // swap the values 

    int temp = first;

    first = second;
    second = temp;

    printf("first=%d, second=%d \n", first,second);

}