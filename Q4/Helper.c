#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayFloat
//  Description: Accepts base address and size of an array and displays all the elements greater than 8.9.
//  Input: float[IN OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFloat(float *fArr,int iSize)
{
    int iCnt=0;

    if(fArr==NULL)
    {
        printf("Incorrect input address!\n");
        return;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(fArr[iCnt]>=8.9)
        {
            printf("%f\t",fArr[iCnt]);
        }
    }
    printf("\n");

}