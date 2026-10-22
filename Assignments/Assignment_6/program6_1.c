/*
Accept the number of electricity unit consumed and calculate the total bill using the following sub-wise rates.
Each slab applies only to units within that slab
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CalculateElectricityBill
//  Description  : Accept the number of electricity unit consumed and calculate the total bill using the following sub-wise rates
//  Input        : Integer
//  Output       : String , Float
//  Date         : 22/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f",fBill); 
    }
    else if(iUnits <= 200)
    {
        fBill = 100 * 5 + ((iUnits - 100)*7);
        printf("Bill = %.2f",fBill);
    }
    else if(iUnits > 200)
    {
        fBill = ((100 * 5) + (100 * 7)) + ((iUnits - 200) * 10);
        printf("Bill = %.2f",fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter Unit : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}