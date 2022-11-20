#include<stdio.h>
#include"minih.h"
int main()
{
    int a,b;
    double x;
    printf("\n");
    printf("-------------------------------------------\n");
    printf("|                                         |\n");
    printf("|           CURRENCY CONVERTER            |\n");
    printf("|                                         |\n");
    printf("-------------------------------------------\n");
    printf("\n");
    printf("Please choose the currency which you need to convert from:\n\n");
    printf(" 1)INDIA        INR()\n");
    printf(" 2)USA          USD($)\n");
    printf(" 3)EUROPE       EURO()\n");
    printf(" 4)JAPAN        JPY()\n");
    printf(" 5)ENGLAND      GBP()\n");
    printf(" 6)AUSTRALIA    ASD(A$)\n");
    printf(" 7)CANADA       CAD(C$)\n");
    printf(" 8)FRANCE       CHF(CHF)\n");
    printf(" 9)SINGAPORE    SGD(S$)\n");
    printf("10)RUSSIA       RUB()\n\n");
    scanf("%d",&a);
    while((a<1)||(a>10))
    {
        printf("INVALID ENTRY!!!\nEnter number between 1-10\n");
        scanf("%d",&a);
    }
    switch(a)
    {
        case 1:
            india(b,x);
            break;
        case 2:
            usa(b,x);
            break;
        case 3:
            europe(b,x);
            break;
        case 4:
            japan(b,x);
            break;
        case 5:
            england(b,x);
            break;
        case 6:
            australia(b,x);
            break;
        case 7:
            canada(b,x);
            break;
        case 8:
            france(b,x);
            break;
        case 9:
            singapore(b,x);
            break;
        case 10:
            russia(b,x);
            break;
    }

}