/*Klavyeden girilen 20 sayıdan en büyüğünü bulan ve ekrana yazan algoritmayı yazınız.****/
#include<stdio.h>
int main(){
    int sayi;
    int sayac=0;
    int sayi1;
    int enb;
    printf("sayi giriniz");
    scanf("%d",&sayi1);
    sayac=sayac+1;
    enb=sayi1;
    do
   { printf("sayi giriniz");
    scanf("%d",&sayi);
    sayac=sayac+1;
    if(enb<sayi)
    enb=sayi;}
   while(sayac<20);
   printf("%d",enb);
}