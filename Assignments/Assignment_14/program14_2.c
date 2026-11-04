//Write aprogram which accepts number from user and Display its factors in decreasing order  
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: FactRev
//  Description  : accepts number from user and Display its factors in decreasing order  
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}