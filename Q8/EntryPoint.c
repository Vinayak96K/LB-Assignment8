#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iBrr[5];
    int iCnt=0;
    int iRet=0;

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("Enter element at iBrr[%d]",iCnt);
        scanf("%d",&iBrr[iCnt]);
    }

    iRet=iMaximum(iBrr,5);
    if(iRet!=ERR)
    {
        printf("Maximum element:%d\n",iRet);
    }
    else
    {
        printf("Incorrect input address!\n");
    }


    return 0;
}