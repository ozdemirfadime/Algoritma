/*Ekmeği 50 kuruş, poğaçayı 45 kuruş, simidi 35 kuruştan satan bir fırıncı kazancının %18’i vergi
vermektedir. Fırıncının sattığı ürün sayısı ürün çeşitlerine göre klavyeden girildikten sonra
fırıncının kazancı ve ödemesi gereken vergi hesaplayıp bu bilgileri ekrana yazdıran programın,*/
#include<stdio.h>
int main()
{
    float  ekmek=0.5;
    float pogaca=0.45;
    float  simit=0.35;
    double kazanc;
    double vergi;
    int ekmeksayisi;
    int pogacasayisi;
    int simitsayisi;
    printf("satılan ekmek sayisi");
    scanf("%d",&ekmeksayisi);
    printf("satılan pogaca sayisi");
    scanf("%d",&pogacasayisi);
    printf("satılan simit sayisi");
    scanf("%d",&simitsayisi);
    kazanc =(ekmek*ekmeksayisi)+(pogaca*pogacasayisi)+(simitsayisi*simit);
    printf("kazanç: %lf\n",kazanc);
    vergi=kazanc*0.18;
    printf("vergi %lf",vergi);
    return 0;
}