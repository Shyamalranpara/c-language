#include<stdio.h>
int main()
{
    int num ;

    printf("Enter Your Choice:");
    scanf("%d",&num);
    switch (num)
    case 1: 
        printf("Press 1 for English");
            int num2 ; 
            printf("Enter for Inner Choice:");
            scanf("%d",&num2);
        switch (num2)
        {
        case 1:
        printf("Press 1 for Internet Recharge");
            break;
        case 2:
        printf("Press 2 for Top-Up Recharge");
            break;
        case 3:
        printf("Press 3 for Special Recharge");
            break;
        
        default:
        printf("Enter Valid Number");
            break;
        }
        break;
        
    case 2: 
        printf("Press for 2 Hindi");
            int num2 ; 
            printf("Enter for Inner Choice:");
            scanf("%d",&num2);
        switch (num2)
        {
        case 1:
        printf("Internet Recharge ke liye 1 dabaiye");
            break;
        case 2:
        printf("Internet Recharge ke liye 2 dabaiye");
            break;
        case 3:
        printf("Internet Recharge ke liye 3 dabaiye");
            break;
        
        default:
        printf("Enter Valid Number");
            break;
        
        break;
      
             
    case 3: 
        printf("Press for 3 gujarati");
            int num2 ; 
            printf("Enter for Inner Choice:");
            scanf("%d",&num2);
        switch (num2)
        {
        case 1:
        printf("Internet Recharge ke liye 1 dabaiye");
            break;
        case 2:
        printf("Internet Recharge ke liye 2 dabaiye");
            break;
        case 3:
        printf("Internet Recharge ke liye 3 dabaiye");
            break;
        
        default:
        printf("Enter Valid Number");
            break;
        
        break;

    default: ("have any issue")
        break;


    return 0; 
}