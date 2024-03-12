#include <stdio.h>

main(){

    int a;

    printf("Enter your age :");

    scanf("%d",&a);

    if(a<18){
        printf("You cannot vote.");
    }

    else if(a==18){
        printf("You can also vote.");
    }
    
    else{
        printf("You can Vote");
    }
}