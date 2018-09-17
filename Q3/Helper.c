#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: AddEven
//  Description: Accepts base address of array and size of an array and returns addition of all the even elements stored in it.
//  Input: int[IN OUT,IN]
//  Output: int[IN]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int AddEven(int *iArr,int iSize)
{
    int iCnt=0;
    int iCnt1=0;
    int iSum=0;

    if(iArr==NULL)
    {
       
        return ERR;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt=0,iCnt1=iSize-1; iCnt<iSize/2 || iCnt1>=iSize/2; iCnt++,iCnt1--)
    {   if(iCnt!=(iSize/2))
        {    
        if((iArr[iCnt]%2)==0)
        {
            iSum=iSum+iArr[iCnt];
        }
        }
        if((iArr[iCnt1]%2)==0)
        {
            iSum=iSum+iArr[iCnt1];
        }
    }
    return iSum;

}