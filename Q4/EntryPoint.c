#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    float fBrr[5];
    int iCnt=0;

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("Enter float element at fBrr[%d]",iCnt);
        scanf("%f",&fBrr[iCnt]);
    }

    DisplayFloat(fBrr,5);

    return 0;
}
