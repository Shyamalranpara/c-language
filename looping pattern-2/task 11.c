
#include <stdio.h>
main(){
    for (int i = 1; i <= 5; i++){
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        
        for (int j = i*2-1; j >= 1; j--){
            printf("*",j);
        }
        printf("\n");
    }
}
