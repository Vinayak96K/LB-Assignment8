#include"MyHeader.h"

int main(int argc, char const *argv[])
{

    int iBrr[7];
    int iCnt=0;
    int iRet=0;

    for(iCnt=0;iCnt<7;iCnt++)
    {
        printf("Enter element at iBrr[%d]:",iCnt);
        scanf("%d",&iBrr[iCnt]);
    }

    iRet=DisplayNearest(iBrr,7);

    if(iRet!=ERR)
    {
        printf("The Nearest element is:%d\n",iRet);
    }
    else
    {
        printf("Incorrect input address!\n");
    }

    return 0;
}
