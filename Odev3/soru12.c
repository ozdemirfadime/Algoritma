/*Klavyeden girilen sayıları okuyan ve sayıların 
//toplamı 21'den büyük veya eşit olduğu zaman duran program*/
#include<stdio.h>
int main(){
    int sayi,i;
    int toplam=0;
   do { 
    printf("sayı giriniz");
    scanf("%d",&sayi);
    toplam+=sayi;
    
    }
    while(toplam<=21);
    printf("toplam %d",toplam);
}