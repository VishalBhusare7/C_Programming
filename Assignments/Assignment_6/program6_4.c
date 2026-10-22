/*
Accept three integers values representing the lengths of the sides of the triangle.
Determine whether they can form a valid triangle.
All sides must be positive and the sum of any 2 sides must be grater than the third side.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckTriangle
//  Description  : Accept three integers values representing the lengths of the sides of the triangle
//  Input        : Integer , Integer , Integer
//  Output       : String 
//  Date         : 22/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    //filter
    if((iSide1 < 0) || (iSide2 < 0) || (iSide3 < 0))
    {
        printf("Invalid Input");
        return;
    }

    if((iSide1 < (iSide2 + iSide3)) && (iSide2 < (iSide1 + iSide3)) && (iSide3 < (iSide1 + iSide2)))
    {
        printf("Valid Triangle \n");
    }
    else
    {
        printf("Invalid Triangle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0; 

    printf("Enter Three Sides : \n");
    scanf("%d   %d  %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}