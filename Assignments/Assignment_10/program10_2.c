//Write a program which accepts width and height of rectangle from user and calculate its area (Area = width * Height)
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: RectArea
//  Description  : accepts width and height of rectangle from user and calculate its area (Area = width * Height)
//  Input        : Float , Float
//  Output       : Double
//  Date         : 2/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dResult = 0.0;

    dResult = fWidth * fHeight;
    
    return dResult;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width  : \n");
    scanf("%f",&fValue1);

    printf("Enter Height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %.3lf\n",dRet);

    return EXIT_SUCCESS;
}