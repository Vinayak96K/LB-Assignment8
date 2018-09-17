#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iBrr[8];
    int iCnt=0;

    for(iCnt=0;iCnt<8;iCnt++)
    {
        printf("Enter element at iBrr[%d]",iCnt);
        scanf("%d",&iBrr[iCnt]);
    }

    PrintCountDigit(iBrr,8);


    return 0;
}