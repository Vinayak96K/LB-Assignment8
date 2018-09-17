#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayEven
//  Description: Accepts base address of array and size of an array and displays all the even elements stored in it.
//  Input: int[IN OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEven(int *iArr,int iSize)
{
    int iCnt=0;
    int iCnt1=0;

    if(iArr==NULL)
    {
        printf("Incorrect address input!\n");
        return;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt=0,iCnt1=iSize-1;iCnt<iSize/2 || iCnt1>=iSize/2;iCnt++,iCnt1--)
    {   if(iCnt!=(iSize/2))
        {    
        if((iArr[iCnt]%2)==0)
        {
            printf("%d\t",iArr[iCnt]);
        }
        }
        if((iArr[iCnt1]%2)==0)
        {
            printf("%d\t",iArr[iCnt1]);
        }
    }
    printf("\n");

}