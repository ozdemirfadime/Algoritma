/*Aşağıdaki algoritmanın kod karşılığı nedir?
1.Başla
2.Sayı1 değerine gir (Sayı1)
3.Sayı2 değerine gir (Sayı2)
4.Sayac değerine 0 ata (S=0)
5.Sayı1‟in 3 modunu al (sonuc=Sayı1 mod 3)
6.Eğer sonuc=0 ise Ekrana Sayı1 değerini yazdır (Sayı1), S=S+1
7.Sayı1=Sayı1+1
8.Eğer Sayı1<=Sayı2 ise 5.adıma git
9.Ekrana S değerini yazdır (S)
10.Dur*/
#include<stdio.h>
int main()
{
    int sayi1,sayi2,sonuc,i;
    int sayac=0;
    printf("1.sayi giriniz");
    scanf("%d",&sayi1);
    printf("2.sayi giriniz");
    scanf("%d",&sayi2);
   do{
         sonuc=sayi1%3;
       if(sonuc==0){
    
        printf("sayi1 %d \n ",sayi1);
     sayac++;
   }
   sayi1++;
   }
    while(sayi1<=sayi2);
    printf("sayac:%d",sayac);


}
