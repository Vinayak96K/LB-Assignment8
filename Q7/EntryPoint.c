#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iBrr[5];
    int iCnt=0;

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("Enter element at iBrr[%d]",iCnt);
        scanf("%d",&iBrr[iCnt]);
    }

    PrintSumDigit(iBrr,5);


    return 0;
}