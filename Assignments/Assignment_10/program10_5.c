//Write a program which accepts area in square feet and convert it into square meter.(1 Square Feet = 0.092903 Square Meter)
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: SquareMeter
//  Description  : accepts area in square feet and convert it into square meter.(1 Square Feet = 0.092903 Square Meter)
//  Input        : Integer
//  Output       : Double
//  Date         : 2/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dResult = 0.0;

    dResult = iNo * 0.092903;

    return dResult;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is : %lf\n",dRet);

    return EXIT_SUCCESS;
}
