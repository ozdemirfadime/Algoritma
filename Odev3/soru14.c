/*14.Bir öğrencinin bir dersten aldığı başarı notunun hesaplanması şu şekilde istenmektedir,
a.Öğrenciye kaç adet Kısa sınav, kaç adet Vize sınavına gireceği bilgileri sorulacaktır,
b.Girilen sayılara göre kısa sınav ve vize notları klavyeden girilerek bu notların aritmetik ortalamaları alınacaktır,
c.Son olarak final notu girilerek, başarı puanı hesaplanıp ekrana yazılacaktır.
d.Başarı puanı şu şekilde hesaplanmaktadır : BP= (KSort* 50/100  +Vort* 50 / 100 ) * 40/100 + F* 60/100;Not :
 BP: Başarı puanı, KSort:Kısa sınavların not ortalaması, Vort:Vizelerin not ortalaması, F: Final Notu*/

#include<stdio.h>
int main()
{
 int kisaSinavSayisi, vizeSinavSayisi,kisaNot,vizeNot,kisaNotlar=0,VizeNotlar=0,sonuc1=0,sonuc2=0,final;
 float BP;
 
 printf(" kisa sınav sayisini giriniz ");
    scanf("%d",&kisaSinavSayisi);
    printf(" vize sınav sayisini giriniz ");
    scanf("%d",& vizeSinavSayisi);
    
    for(int i=0; i< kisaSinavSayisi;i++){
      printf(" kisa sınav notlarini giriniz ");
            scanf("%d",&kisaNot);
            kisaNotlar+=kisaNot;
     
 }
        sonuc1=kisaNotlar/kisaSinavSayisi;
  for(int i=0; i< vizeSinavSayisi;i++){
      printf(" vize sınav notlarini giriniz ");
            scanf("%d",&vizeNot);
            VizeNotlar+=vizeNot;
     
 }
        sonuc2=VizeNotlar/vizeSinavSayisi; 
     
      printf(" final sınav notunu giriniz ");
            scanf("%d",&final);
      
     BP =( (sonuc1*0.5+sonuc2*0.5)*0.4+final*0.6);
      
           printf("başari notu:%f",BP);     
}