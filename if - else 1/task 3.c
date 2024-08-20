#include <stdio.h>
 
int main()
{
    int maths,english,science; 
    float Total, avg;
    
    if(100 >= maths)
    {
    	printf("\n enter the maths marks: ");
        scanf("%d\n",&maths);
	}
	else if(100 >= english)
    {
    	printf("\n enter the english: ");
        scanf("%d\n",&english);

	}
	else if(100 >= science)
    {
    	printf("\n enter the science: ");
        scanf("%d\n",&science);

	}

    Total = maths + english + science;
    avg = Total / maths + english + science;
 
    printf(" Total Marks = %.2f\n", Total);
    printf(" Marks av = %.2f", avg);
}