#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iBrr[10];
    int iCnt=0;

    for(iCnt=0;iCnt<10;iCnt++)
    {
        printf("Enter number at brr[%d]:",iCnt);
        scanf("%d",&iBrr[iCnt]);
    }

    DisplayReverse(iBrr,10);



    return 0;
}