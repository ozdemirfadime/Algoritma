/*Klavyeden girilen 10 tane sayıdan en büyüğünü bulan ve ekrana yazan algoritmayı yazınız.****/
#include<stdio.h>
int main(){
    int sayi,sayi1,enb;
    int sayac=0;
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
    while(sayac<10);
    printf("%d",enb);

}