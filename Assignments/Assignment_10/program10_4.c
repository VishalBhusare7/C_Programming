//Write a program which accept tempreture in fahrenheit and convert it into celsius.(1 Celsius = (Fahrenheit - 32) * 5/9)
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: FhtoCs
//  Description  : accept tempreture in fahrenheit and convert it into celsius.(1 Celsius = (Fahrenheit - 32) * 5/9)
//  Input        : Float
//  Output       : Double
//  Date         : 2/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dResult = 0.0;

    dResult = (fTemp - 32) * 5 / 9;

    return dResult;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Tempreture in Celsius is : %.4lf\n",dRet);

    return EXIT_SUCCESS;
}
