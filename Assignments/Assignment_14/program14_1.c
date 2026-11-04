//Write aprogram which accepts number from user and Display its Multiplication of factors
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: MultFact
//  Description  : accepts number from user and Display its Multiplication of factors
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = iNo/2; iCnt > 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    printf("%d\n",iMult);
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultFact(iValue);

    return EXIT_SUCCESS;
}