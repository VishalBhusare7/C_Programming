//Write a program which accepts distance in kilometer and convert it into meter.(1 Kilometer = 1000 Meter)
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: KMtoMeter
//  Description  : accepts distance in kilometer and convert it into meter.(1 Kilometer = 1000 Meter)
//  Input        : Integer
//  Output       : Integer
//  Date         : 2/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d\n",iRet);

    return EXIT_SUCCESS;
}