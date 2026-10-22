//Accept one number and check whether it is divisible by 5 or not
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Check
//  Description  : Check whether entered number is divisible by 5 or not
//  Input        : Integer
//  Output       : Divisible by 5 or Not Divisible by 5
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return EXIT_SUCCESS;
}