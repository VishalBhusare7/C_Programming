//write a program which accepts number from user and display below pattern
//  *   *   *   #   #   #   (if input is 3)
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : accepts number from user and display below pattern
//  Input        : Integer
//  Output       : Special Symbol
//  Date         : 31/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt1 = 1, iCnt2 = 1;

    if(iNo < 0)         //Updater
    {
        iNo = -iNo;
    }

    while(iCnt1 <= iNo)
    {
        while(iCnt2 <= iNo)
            {
                printf("*\t");
                iCnt2++;
            }

        printf("#\t");
        iCnt1++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}