#include <stdio.h>

main(){

    int a;

    printf("Enter year:");

    scanf("%d",&a);

    if(a%4 == 0){
        printf("%d  is a leap year",a);
    }

    else{
        printf("%d  is not a leap year",a);
    }
    
}