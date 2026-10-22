/*
Accept the total purchase amount and calculate the final payable amount after applying the following discount.
Negative purchase amount are invalid.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CalculateDiscount
//  Description  : Accept the total purchase amount and calculate the final payable amount after applying the following discount
//  Input        : Float
//  Output       : String , Float
//  Date         : 22/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    //filter
    if(fAmount <= 0.0)
    {
        printf("Purchase Amount is Invalid \n");
        return;
    }

    if(fAmount < 1000)
    {
        printf("Payble Amount = %f",fAmount);
    }
    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = (fAmount * 10) / 100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payble Amount = %.2f",fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = (fAmount * 20)/100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payble Amount = %.2f",fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}