/*Klavyeden girilen 20 tane sayıdan pozitiflerin toplamını bulan ve ekrana yazan algoritmayı yazınız.*/
#include<stdio.h>
int main(){
    int sayi;
    int sayac=0;
    int toplam=0;
   do{ printf("sayı giriniz");
    scanf("%d",&sayi);
    sayac=sayac+1;
    if(sayi>0)
    toplam=toplam+sayi;}
    while(sayac<20);
    printf("toplam %d",toplam);
}