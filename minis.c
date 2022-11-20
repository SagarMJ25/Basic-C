#include<stdio.h>
    void india(int b, double x)
    {
        printf("You have selected INDIA\nso enter the amount in rupees\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)USA          USD($)\n");
            printf(" 2)EUROPE       EURO()\n");
            printf(" 3)JAPAN        JPY()\n");
            printf(" 4)ENGLAND      GBP()\n");
            printf(" 5)AUSTRALIA    ASD(A$)\n");
            printf(" 6)CANADA       CAD(C$)\n");
            printf(" 7)FRANCE       CHF(CHF)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected USA so the converted vaule of\n%.2lf rupee = $%.2lf\n",x,x/73.26);
                        break;
                    case 2:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf rupee = %.2lfeuro\n",x,x/88.77);
                        break;
                    case 3:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf rupee = %.2lfyen\n",x,x/0.67);
                        break;
                    case 4:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf rupee = %.2lfgbp\n",x,x/103.23);
                        break;
                    case 5:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf rupee = A$%.2lf\n",x,x/56.51);
                        break;
                    case 6:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf rupee = C$%.2lf\n",x,x/60.25);
                        break;
                    case 7:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf rupee = %.2lfchf\n",x,x/81.54);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf rupee = S$%.2lf\n",x,x/55.21);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf rupee = %.2lfrub\n",x,x/1.01);
                        break;
                } 
            
    }  

void usa(int b, double x)
    {
        printf("You have selected USA\nso enter the amount in $\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)EUROPE       EURO()\n");
            printf(" 3)JAPAN        JPY()\n");
            printf(" 4)ENGLAND      GBP()\n");
            printf(" 5)AUSTRALIA    ASD(A$)\n");
            printf(" 6)CANADA       CAD(C$)\n");
            printf(" 7)FRANCE       CHF(CHF)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf $ =%.2lfrupee\n",x,x/0.013);
                        break;
                    case 2:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf $ = %.2lfeuro\n",x,x/1.18);
                        break;
                    case 3:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf $ = %.2lfyen\n",x,x/0.0092);
                        break;
                    case 4:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf $ = %.2lfgbp\n",x,x/1.38);
                        break;
                    case 5:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf $ = A$%.2lf\n",x,x/0.73);
                        break;
                    case 6:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf $ = C$%.2lf\n",x,x/0.80);
                        break;
                    case 7:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf $ = %.2lfchf\n",x,x/1.10);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf $ = S$%.2lf\n",x,x/0.74);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf $ = %.2lfrub\n",x,x/0.014);
                        break;
                } 
            
    }  

void europe(int b,double x)
    {
        printf("You have selected EUROPE\nso enter the amount in euro\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)JAPAN        JPY()\n");
            printf(" 4)ENGLAND      GBP()\n");
            printf(" 5)AUSTRALIA    ASD(A$)\n");
            printf(" 6)CANADA       CAD(C$)\n");
            printf(" 7)FRANCE       CHF(CHF)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf euro =%.2lfrupee\n",x,x/0.011);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf euro = $ %.2lf\n",x,x/0.85);
                        break;
                    case 3:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf euro = %.2lfyen\n",x,x/0.0078);
                        break;
                    case 4:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf euro = %.2lfgbp\n",x,x/1.18);
                        break;
                    case 5:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf euro = A$%.2lf\n",x,x/0.62);
                        break;
                    case 6:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf euro = C$%.2lf\n",x,x/0.68);
                        break;
                    case 7:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf euro = %.2lfchf\n",x,x/0.93);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf euro = S$%.2lf\n",x,x/0.63);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf euro = %.2lfrub\n",x,x/0.012);
                        break;
                } 
            
    }  
    
void japan(int b, double x)
    {
        printf("You have selected JAPAN\nso enter the amount in yen\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)EUROPE       EURO()\n");
            printf(" 4)ENGLAND      GBP()\n");
            printf(" 5)AUSTRALIA    ASD(A$)\n");
            printf(" 6)CANADA       CAD(C$)\n");
            printf(" 7)FRANCE       CHF(CHF)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf yen =%.2lfrupee\n",x,x/1.47);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf yen = $ %.2lf\n",x,x/109.22);
                        break;
                    case 3:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf yen = %.2lfeuro\n",x,x/128.62);
                        break;
                    case 4:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf yen = %.2lfgbp\n",x,x/151.19);
                        break;
                    case 5:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf yen = A$%.2lf\n",x,x/80.12);
                        break;
                    case 6:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf yen = C$%.2lf\n",x,x/86.88);
                        break;
                    case 7:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf yen = %.2lfchf\n",x,x/119.73);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf yen = S$%.2lf\n",x,x/80.56);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf yen = %.2lfrub\n",x,x/1.49);
                        break;
                } 
            
    }  

void england(int b, double x)
    {
        printf("You have selected ENGLAND\nso enter the amount in gbp\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)EUROPE       EURO()\n");
            printf(" 4)JAPAN        JPY()\n");
            printf(" 5)AUSTRALIA    ASD(A$)\n");
            printf(" 6)CANADA       CAD(C$)\n");
            printf(" 7)FRANCE       CHF(CHF)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf gbp =%.2lfrupee\n",x,x/0.0097);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf gbp = $ %.2lf\n",x,x/0.72);
                        break;
                    case 3:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf gbp = %.2lfeuro\n",x,x/0.85);
                        break;
                    case 4:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf gbp = %.2lfyen\n",x,x/0.0066);
                        break;
                    case 5:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf gbp = A$%.2lf\n",x,x/0.53);
                        break;
                    case 6:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf gbp = C$%.2lf\n",x,x/0.57);
                        break;
                    case 7:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf gbp = %.2lfchf\n",x,x/0.79);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf gbp = S$%.2lf\n",x,x/0.53);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf gbp = %.2lfrub\n",x,x/0.0099);
                        break;
                } 
            
    }  

void australia(int b, double x)
    {
        printf("You have selected AUSTRALIA\nso enter the amount in ASD\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)EUROPE       EURO()\n");
            printf(" 4)JAPAN        JPY()\n");
            printf(" 5)ENGLAND      GBP()\n");
            printf(" 6)CANADA       CAD(C$)\n");
            printf(" 7)FRANCE       CHF(CHF)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf asd =%.2lfrupee\n",x,x/0.018);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf asd = $ %.2lf\n",x,x/1.36);
                        break;
                    case 3:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf asd = %.2lfeuro\n",x,x/1.61);
                        break;
                    case 4:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf asd = %.2lfyen\n",x,x/0.012);
                        break;
                    case 5:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf asd = %.2lfgbp\n",x,x/1.89);
                        break;
                    case 6:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf asd = C$%.2lf\n",x,x/1.08);
                        break;
                    case 7:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf asd = %.2lfchf\n",x,x/1.49);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf asd = S$%.2lf\n",x,x/1.01);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf asd = %.2lfrub\n",x,x/0.019);
                        break;
                } 
            
    }  

void canada(int b, double x)
    {
        printf("You have selected CANADA\nso enter the amount in CAD\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)EUROPE       EURO()\n");
            printf(" 4)JAPAN        JPY()\n");
            printf(" 5)ENGLAND      GBP()\n");
            printf(" 6)AUSTRALIA    ASD(A$)\n");
            printf(" 7)FRANCE       CHF(CHF)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf cad =%.2lfrupee\n",x,x/0.017);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf cad = $ %.2lf\n",x,x/1.26);
                        break;
                    case 3:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf cad = %.2lfeuro\n",x,x/1.48);
                        break;
                    case 4:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf cad = %.2lfyen\n",x,x/0.012);
                        break;
                    case 5:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf cad = %.2lfgbp\n",x,x/1.74);
                        break;
                    case 6:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf cad = A$%.2lf\n",x,x/0.92);
                        break;
                    case 7:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf cad = %.2lfchf\n",x,x/1.38);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf cad = S$%.2lf\n",x,x/0.93);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf cad = %.2lfrub\n",x,x/0.017);
                        break;
                } 
            
    }  

void france(int b, double x)
    {
        printf("You have selected FRANCE\nso enter the amount in CAD\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)EUROPE       EURO()\n");
            printf(" 4)JAPAN        JPY()\n");
            printf(" 5)ENGLAND      GBP()\n");
            printf(" 6)AUSTRALIA    ASD(A$)\n");
            printf(" 7)CANADA       CAD(C$)\n");
            printf(" 8)SINGAPORE    SGD(S$)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf chf =%.2lfrupee\n",x,x/0.012);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf chf = $ %.2lf\n",x,x/0.91);
                        break;
                    case 3:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf chf = %.2lfeuro\n",x,x/1.07);
                        break;
                    case 4:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf chf = %.2lfyen\n",x,x/0.0084);
                        break;
                    case 5:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf chf = %.2lfgbp\n",x,x/1.26);
                        break;
                    case 6:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf chf = A$%.2lf\n",x,x/0.67);
                        break;
                    case 7:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf chf = %.2lfC$\n",x,x/0.73);
                        break;
                    case 8:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf chf = S$%.2lf\n",x,x/0.67);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf chf = %.2lfrub\n",x,x/0.012);
                        break;
                } 
            
    }  

void singapore(int b, double x)
    {
        printf("You have selected SINGAPORE\nso enter the amount in SGD\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)EUROPE       EURO()\n");
            printf(" 4)JAPAN        JPY()\n");
            printf(" 5)ENGLAND      GBP()\n");
            printf(" 6)AUSTRALIA    ASD(A$)\n");
            printf(" 7)CANADA       CAD(C$)\n");
            printf(" 8)FRANCE       CHF(CHF)\n");
            printf(" 9)RUSSIA       RUB()\n\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf sgd =%.2lfrupee\n",x,x/0.018);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf sgd = $ %.2lf\n",x,x/1.36);
                        break;
                    case 3:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf sgd = %.2lfeuro\n",x,x/1.60);
                        break;
                    case 4:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf sgd = %.2lfyen\n",x,x/0.012);
                        break;
                    case 5:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf sgd = %.2lfgbp\n",x,x/1.88);
                        break;
                    case 6:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf sgd = A$%.2lf\n",x,x/0.99);
                        break;
                    case 7:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf sgd = %.2lfC$\n",x,x/1.08);
                        break;
                    case 8:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf sgd = %.2lfchf\n",x,x/1.49);
                        break;
                    case 9:
                        printf("You have selected RUSSIA so the converted vaule of\n%.2lf sgd = %.2lfrub\n",x,x/0.018);
                        break;
                } 
            
    }  

void russia(int b, double x)
    {
        printf("You have selected RUSSIA\nso enter the amount in RUB\n\n");
            scanf("%lf",&x);
            printf("Choose the currency which you need to convert to: \n");
            printf(" 1)INDIA        INR()\n");
            printf(" 2)USA          USD($)\n");
            printf(" 3)EUROPE       EURO()\n");
            printf(" 4)JAPAN        JPY()\n");
            printf(" 5)ENGLAND      GBP()\n");
            printf(" 6)AUSTRALIA    ASD(A$)\n");
            printf(" 7)CANADA       CAD(C$)\n");
            printf(" 8)FRANCE       CHF(CHF)\n");
            printf(" 9)SINGAPORE    SGD(S$)\n");
            scanf("%d",&b);
             while((b<1)||(b>9))
            {
                printf("INVALID ENTRY!!!\nChoose number between 1-9\n");
                scanf("%d",&b);
            }
            switch(b)
                {
                    case 1:
                        printf("You have selected INDIA so the converted vaule of\n%.2lf rub =%.2lfrupee\n",x,x/00.99);
                        break;
                    case 2:
                        printf("You have selected USA so the converted vaule of\n%.2lf rub = $ %.2lf\n",x,x/73.31);
                        break;
                    case 3:
                        printf("You have selected EUROPE so the converted vaule of\n%.2lf rub = %.2lfeuro\n",x,x/86.32);
                        break;
                    case 4:
                        printf("You have selected JAPAN so the converted vaule of\n%.2lf rub = %.2lfyen\n",x,x/0.67);
                        break;
                    case 5:
                        printf("You have selected ENGLAND so the converted vaule of\n%.2lf rub = %.2lfgbp\n",x,x/101.44);
                        break;
                    case 6:
                        printf("You have selected AUSTRALIA so the converted vaule of\n%.2lf rub = A$%.2lf\n",x,x/53.75);
                        break;
                    case 7:
                        printf("You have selected CANADA so the converted vaule of\n%.2lf rub = %.2lfC$\n",x,x/58.29);
                        break;
                    case 8:
                        printf("You have selected FRANCE so the converted vaule of\n%.2lf rub = %.2lfchf\n",x,x/80.35);
                        break;
                    case 9:
                        printf("You have selected SINGAPORE so the converted vaule of\n%.2lf rub = S$%.2lf\n",x,x/54.06);
                        break;
                } 
            
    }  