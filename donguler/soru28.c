/*Klavyeden girilen 10 tane sayıdan negatiflerin sayısını, pozitiflerin toplamını bulan ve her ikisini de
ekrana yazan algoritmayı yazınız.*/
#include<stdio.h>
int main(){
    int sayi;
    int sayac=0;
    int toplam=0;
    int nadet=0;
    do {printf("sayi giriniz \n");
    scanf("%d",&sayi);
    sayac=sayac+1;
    if(sayi>0)
    toplam=toplam+sayi;
    if (sayi<0)
    nadet=nadet+1;}
    while(sayac<10);
    printf(" toplam:%d \n ",toplam);
    printf("nadet:%d",nadet);
    
}