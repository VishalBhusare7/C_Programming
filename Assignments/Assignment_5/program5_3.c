/*
Accept the marks of a studentout of 100 and display the grade according to the following criteria.
marks outside 0-100 invalid.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayGrade
//  Description  : Accept the marks of a studentout of 100 and display the grade according to the following criteria
//  Input        : Float
//  Output       : Charecter
//  Date         : 21/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void DisplayGrade(float fNo)
{
    if((fNo > 100) || (fNo < 0))
    {
        printf("Invalid Marks ");
        return;
    }
    else if((fNo <= 100) && (fNo >= 90))
    {
        printf("Grade A \n");
    }
    else if((fNo <= 89) && (fNo >= 75))
    {
        printf("Grade B \n");
    }
    else if((fNo <= 74) && (fNo >= 60))
    {
        printf("Grade C \n");
    }
    else if((fNo <= 59) && (fNo >= 40))
    {
        printf("Grade D \n");
    }
    else
    {
        printf("Fail \n");
    }
    
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}