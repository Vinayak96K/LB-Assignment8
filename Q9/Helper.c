#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: iMinimum
//  Description: Accepts base address and size of an array and returns the minimum element.
//  Input: int[IN OUT,IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////

int iMinimum(int *iArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    int iMin=99999999;

    if(iArr==NULL)
    {
        return ERR;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt1=0,iCnt2=iSize-1; iCnt1<iSize/2 || iCnt2>=iSize/2;iCnt1++,iCnt2--)
    {
        if(iCnt1!=(iSize/2))
        {
            if(iMin>iArr[iCnt1])
            {
                iMin=iArr[iCnt1];
            }
        }

        if(iMin>iArr[iCnt2])
            {
                iMin=iArr[iCnt2];
            }
    }
    return iMin;

}