/*Klavyeden girilen 10 tane sayıdan pozitifleri ekrana yazan algoritmayı yazınız.*/
#include<stdio.h>
int main(){
    int sayi;
    int sayac=0;
   do{ printf("sayi giriniz \n");
    scanf("%d",&sayi);
    sayac=sayac+1;
    if(sayi>0)
    printf(" poztif sayi %d \n",sayi);
    }
    while(sayac<10);
}