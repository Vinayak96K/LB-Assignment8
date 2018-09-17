#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayReverse
//  Description: Accepts base address and size of array and returns displays all the elements in reverse format.
//  Input: int[IN OUT, IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayReverse(int *iArr,int iSize)
{
    int iCnt=0;

    if(iArr==NULL)
    {
        printf("Incorrect input address!\n");
        return;
    }

    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        printf("%d\t",iArr[iCnt]);
    }

    printf("\n");

}