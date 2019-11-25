/*Klavyeden girilen 20 tane sayıdan negatiflerin sayısını bulan ve ekrana yazan algoritmayı yazınız.*/
#include<stdio.h>
int main(){
    int sayi;
    int sayac=0;
   do {printf("sayi giriniz");
    scanf("%d",&sayi);
    sayac=sayac+1;
    if(sayi<0)
    printf("sayi %d \n",sayi);
    }
    while(sayac<20);
}
