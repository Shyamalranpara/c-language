#include <stdio.h>
void divideNumbers(int n1 ,int n2){
    printf("division of two numbers: %d\n",n1/n2);
}
void main(){
    int n1 , n2;
    printf("Enter any number: ");
    scanf("%d",&n1);
    printf("Enter any number: ");
    scanf("%d",&n2);
    divideNumbers(n1,n2);
    main();
}
