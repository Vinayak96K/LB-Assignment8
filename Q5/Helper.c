#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: PrintPrime
//  Description: Accpets base address and size of an array and displays all the prime number in the array.
//  Input: int[IN OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintPrime(int *iArr,int iSize)
{
    int iCnt1,iCnt2,i,j;
    int flag1=1;
    int flag2=1;
    if(iArr==NULL)
    {
        printf("Incorrect input address!\n");
        return;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt1=0,iCnt2=iSize-1; iCnt1<iSize/2 || iCnt2>=iSize/2;iCnt1++,iCnt2--)
    {
        for(i=iArr[iCnt1]/2;i>1;i--)
        {
            if(iArr[iCnt1]%i==0)
            {
                flag1=0;
                break;
            }
        }
        for(j=iArr[iCnt2]/2;j>1;j--)
        {
            if(iArr[iCnt2]%j==0)
            {
                flag2=0;
                break;
            }
        }

        if(flag1==1)
        {
            printf("%d\t",iArr[iCnt1]);
        }
        if(flag2==1)
        {
            printf("%d\t",iArr[iCnt2]);
        }

        flag1=1;
        flag2=1;
        
    }
    printf("\n");
}