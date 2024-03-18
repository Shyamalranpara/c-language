#include<stdio.h>

main(){
    int f=0, s=1, n;

    for (size_t i = 0; i < 8; i++)

    {
       printf("%d\n",f);
       
       n=f+s;
       f=s;
       s=n;
    }
     
}