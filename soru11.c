/*Bir eğitim kurumunda görev yapan öğretmenlere normal
 maaşlarına ek olarak, girdikleri ders
saatine göre ek ders ücreti ödenmektedir. 
Ödenecek ek ders ücreti aşağıdaki şartlara göre
verilmektedir.
a. Ders saati 10 saatten az ise ders saati başına 10 TL,
b. Ders saati 10 ile 20 saat arasında ise ders saati başına 12,5TL,
c. Ders saati 20 saatten fazla ise ders saati başına 13 TL,
Buna göre öğretmenin girilen ek ders saatine göre alacağı ek ders ücreti bulan program,*/
#include<stdio.h>
int main(){
    int dersSaati;
    int ekUcret;
    printf("ders saatini giriniz");
    scanf("%d",&dersSaati);
    if(dersSaati <10)
    ekUcret= dersSaati*10;
    if(dersSaati >= 10  && dersSaati<20)
    ekUcret= dersSaati*12.5;
    if(dersSaati>20)
    {
        ekUcret=dersSaati*13;
    }
    printf("ek ücret :%d",ekUcret);
    
}