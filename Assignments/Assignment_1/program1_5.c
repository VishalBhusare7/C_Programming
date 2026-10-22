// Accept one Number from the user and print that number of * on screen
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Accept
//  Description  : Accept number from user and print that many *
//  Input        : Integer
//  Output       : * * * * 
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}