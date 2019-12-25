#include<stdio.h>
#include<stlib.h>
int main()
{
    int tahmin,sayi;
    sayi=1+rand()%100;
    printf("sayi giriniz");
    scanf("%d",&tahmin);
    if(tahmin>sayi){
        printf("aşaği in");

    }
    if(sayi>tahmin)
    printf("yukarı çık");
    else
    printf("tebrikler başardınız");



}