/*Klavyeden kütlesi ve yüksekliği girilen maddenin potansiyeli hesaplayan programın
(formül=mgh ve g değeri 10 alınacak),*/
#include<stdio.h>
int main()
{
    int m;
    int g = 10;
    int h;
    int PE ;
    printf("kütle  giriniz");
    scanf("%d",&m);
    printf("yüksekliği giriniz");
    scanf("%d",&h);
    PE = m*g*h;
    printf(" %d ",PE);
    return 0 ;

}