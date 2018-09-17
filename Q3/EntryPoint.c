#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iBrr[10];
    int iCnt=0,iRet=0;

    for(iCnt=0;iCnt<10;iCnt++)
    {
        printf("Enter number at brr[%d]:",iCnt);
        scanf("%d",&iBrr[iCnt]);
    }

    iRet=AddEven(iBrr,10);

    if(iRet!=ERR)
    {
        printf("Addition of all even elements :%d\n",iRet);
    }
    else
    {
        printf("Incorrect address input!\n");
    }


    return 0;
}
