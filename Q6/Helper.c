#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: PrintCountDigit
//  Description: Accepts base address and size of an array and prints the number of digits of each element.
//  Input: int[IN OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintCountDigit(int *iArr,int iSize)
{
    int iCnt1=0;
    int iCntDigit1=0,iNum1;

    if(iArr==NULL)
    {
        printf("Incorrect input address!\n");
        return;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt1=0; iCnt1<iSize; iCnt1++)
    {
        
            iNum1=iArr[iCnt1];
            while(iNum1!=0)
            {
                iCntDigit1++;
                iNum1=iNum1/10;
            }
            printf("Digit count of %d : %d\n",iArr[iCnt1],iCntDigit1);
            iCntDigit1=0;

    }

}