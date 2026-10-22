/*
A student is eligible for admission if the student's Marks are at least 60 and Age is at least 17 years.
Accept both values and determine eligibility.
Negative Age or Marks outside 0-100 must be treated as invalid input
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckAdmission
//  Description  : Accept Marks and Age of a student and determine eligibility
//  Input        : Float, Integer
//  Output       : String
//  Date         : 22/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    //Filter
    if(((iAge < 0) || (iAge > 100)) || ((fMarks <= 0.0f) || (fMarks > 100.0f)))
    {
        printf("Invalid Input \n");
        return;
    }

    if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission \n");
    }
    else
    {
        printf("Not Eligible \n");
    }
    
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks And Age : \n");
    scanf("%f   %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}