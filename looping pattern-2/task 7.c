#include <stdio.h>
main(){
    for (int i = 5; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        for (int j = 4; j >= i; j--){
            printf("  ",j);
        }
        for (int j = 4; j >= i; j--){
            printf("  ",j);
        }
        for (int j = i; j >= 1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
