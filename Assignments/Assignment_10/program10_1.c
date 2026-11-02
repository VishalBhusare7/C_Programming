/*Write a program which accepts radius of circle from user and calculate it's area.
Consider value of PI as 3.14 (Area = PI * radius * radius)
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CircleArea
//  Description  : accepts radius of circle from user and calculate it's area
//  Input        : Float
//  Output       : Double
//  Date         : 2/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dResult = 0.0;

    dResult = PI * fRadius * fRadius;
    
    return dResult;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %.4lf\n",dRet);

    return EXIT_SUCCESS;
}
