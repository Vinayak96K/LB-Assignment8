#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayNearest
//  Description: Accepts base address and size of an array and returns the element nearest to 90.
//  Input: int[IN OUT,IN]
//  Output: int[IN]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////

int DisplayNearest(int * iArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    int iNearest;
    int iNearMin,iNearMax;
    int iNearMin1=0,iNearMax1=99999999;
    int iNearMin2=0,iNearMax2=99999999;
    int iNearMinDiff,iNearMaxDiff;

    if(iArr==NULL)
    {
        return ERR;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt1=0 , iCnt2=iSize-1; iCnt1<iSize/2 || iCnt2>=iSize/2 ; iCnt1++, iCnt2--)
    {
        if((iArr[iCnt1]==90) ||(iArr[iCnt2]==90))
        {
            iNearest=iArr[iCnt1];
            break;
        }

        if(iCnt1<(iSize/2))
        {
        if(iArr[iCnt1]<90)
        {
            if(iNearMin1<iArr[iCnt1])
            {
                iNearMin1=iArr[iCnt1];
            }
        }
        else
        {
            if(iNearMax1>iArr[iCnt1])
            {
                iNearMax1=iArr[iCnt1];
            }
        }
        }
        
        if(iCnt2>=(iSize/2))
        {
        if(iArr[iCnt2]<90)
        {
            if(iNearMin2<iArr[iCnt2])
            {
                iNearMin2=iArr[iCnt2];
            }
        }
        else
        {
            if(iNearMax2>iArr[iCnt2])
            {
                iNearMax2=iArr[iCnt2];
            }
        }
        }
        
    }

    iNearMax=((iNearMax2<iNearMax1)?(iNearMax2):(iNearMax1));
    iNearMin=((iNearMin2>iNearMin1)?(iNearMin2):(iNearMin1));

    iNearMinDiff=90-iNearMin;

    iNearMaxDiff=iNearMax-90;

    if(iNearMinDiff < iNearMaxDiff)
    {
        iNearest=iNearMin;
    }
    else
    {
        iNearest=iNearMax;
    }

    return iNearest;
}