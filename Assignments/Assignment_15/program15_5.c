//Write a program which accepts total marks & obtained marks from user and calculate percentage
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Percentage
//  Description  : accepts total marks & obtained marks from user and calculate percentage
//  Input        : Integer , Integer
//  Output       : Float
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float iResult = 0.0f;

    if(iNo1 == 0)
{
    return 0.0f;
}

    iResult = (((float)iNo2 / (float)iNo1) * 100);

    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks : \n");
    scanf("%d",&iValue1);
    
    printf("Enter Obtained Marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.1f%%",fRet);

    return EXIT_SUCCESS;
}