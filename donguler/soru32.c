/*Klavyeden girilen 10 tane sayıdan en küçüğünü ekrana yazan algoritmayı yazınız. ****/
#include<stdio.h>
int main(){
    int sayi,sayi1,enb,enk;
    int sayac=0;
    printf("sayı giriniz");
    scanf("%d",&sayi1);
    sayac=sayac+1;
    enb=sayi1;
    enk=sayi1;
   do {printf("sayi giriniz");
    scanf("%d",&sayi);
    sayac=sayac+1;
    if(enb<sayi)
    enb=sayi;
    if(enk>sayi)
    enk=sayi;}
    while(sayac<10);
    printf("enb:%d enk:%d",enb,enk);
}