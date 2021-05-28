#include <stdio.h>

int main()
{
    int num;
    float acre=4046.86, ac =0.025, sqmtr=101.17, sm= 4046.8, acr=0.000247105,gunt=101.17,ans;
    int choice ;

    label:
    printf("\n\nEnter valid choice or Press 0 to exit.\n");
    printf("1. Gunta to Acre \n2. Gunta to Square Meter\n3. Acre to Square Meter\n4. Square Meter to Acre\n5. Square Meter to Gunta\n");

    scanf("%d", &choice);
    if (choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5 && choice!=0)
        goto label;
     if (choice == 0)
     goto end;
   printf("Enter Value \n");
   scanf("%d", &num);


    switch(choice)
    {
        case 1: printf("Gunta to Acre\n");
                ans =  num * ac;
                printf("Value of %d Gunta is %f Acre",num,ans);
                 goto label;
                break;

        case 2: printf("Gunta to Square Meter\n");
                ans =  num * sqmtr;
                printf("Value of %d Gunta is %f Square Meter",num,ans);
                goto label;
                break;

        case 3: printf("Acre to Square Meter\n");
                ans =  num * sm;
                printf("Value of %d Acre is %f Square Meter",num,ans);
                 goto label;
                break;

        case 4: printf("Square Meter to Acre\n");
                ans =  num * acr;
                printf("Value of %d Square Meter is %f Acre",num,ans);
                 goto label;
                break;
        case 5: printf("Square Meter to Gunta\n");
                ans =  num / gunt;
                printf("Value of %d Square Meter is %f Gunta",num,ans);
                 goto label;
                break;

        default: printf("You entered wrong choice\n");
                 goto label;
                 break;
    }
    end:
    return 0;
}
