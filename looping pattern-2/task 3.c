
#include <stdio.h>
main(){
    for (int i = 5; i >= 1; i--)
    {
        for (int k = i; k > 1; k--)
        {
            printf("  ");
        }
        
        for (int j = i; j <= 5; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
