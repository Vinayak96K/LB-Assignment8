#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: iMaximum
//  Description: Accepts base address and size of an array and returns the maximum element.
//  Input: int[IN OUT,IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////

int iMaximum(int *iArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    int iMax=0;

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
            if(iMax<iArr[iCnt1])
            {
                iMax=iArr[iCnt1];
            }
        }

        if(iMax<iArr[iCnt2])
            {
                iMax=iArr[iCnt2];
            }
    }
    return iMax;

}