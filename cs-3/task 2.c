#include <stdio.h>
main()
{
    int first, second;
    printf("Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\n\n");
    printf("Enter a number :");
    scanf("%d", &first);
    switch (first)
    {
    case 1:
        printf("Press 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n\n");
        printf("Enter a number :");
        scanf("%d", &second);
        switch (second)
        {
        case 1:
            printf("You have successfully done a Internet Recharge Recharge.");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge.");
            break;
        case 3:
            printf("You have successfully done a Special Recharge.");
            break;
        default:
            printf("You have been pressed invalid number");
            break;
        }
        break;
    case 2:
        printf("Internet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\n\n");
        printf("koi bhi ek number select kariye :");
        scanf("%d", &second);
        switch (second)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
        case 2:
            printf("Aapne safaltapurvak Top-up kar liya he.");
            break;
        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya he.");
            break;
        default:
            printf("Aapne dala hua number galat he ");
            break;
        }
        break;
    case 3:
        printf("Internet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\n\n");
        printf("koi pan ek number dakhal karo :");
        scanf("%d", &second);
        switch (second)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe.");
            break;
        case 2:
            printf("Tame safaltapurvak Top-up karyu chhe.");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe.");
            break;
        default:
            printf("tame khoto number dakhal karyo chhe.");
            break;
        }
        break;

    default:
        printf("You have been pressed invalid number");
        break;
    }
}