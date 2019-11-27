//Klavyeden girilen 10 tane sayıdan negatiflerin sayısını, pozitiflerin toplamını bulan ve her ikisini de ekrana yazan program
#include<stdio.h>
int main(){
    int sayi;
    int sayac=0;
    int   poToplam=0;
    int  neAdet=0;
    do{
    printf("sayı giriniz");
    scanf("%d",&sayi);
    sayac=sayac+1;
    if(sayi<0)
    neAdet++;
    if(sayi>0)
    poToplam+=sayi;}
    while(sayac<10);
    printf("negatif sayıların sayısı  %d \n",neAdet);
     printf("pozitif toplam %d  \n",poToplam);
    

    }