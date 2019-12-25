//13. Meteoroloji merkezi için bir program tasarlanması istenilmiştir. Programın çalışma şekli ise şöyle olmalıdır: 
//a. İlk önce hangi ay için sıcaklık bilgisi girileceği kullanıcıya sorulacaktır. b. Girilen ay bilgisine uygun olarak o ayda kaç tane gün var ise
// kullanıcıdan gün sayısı kadar sıcaklık bilgisi girilmesi istenilecektir(Şubat ayı için gün sayısını 28 alınız, diğer ayların gün sayısını 30 alınız. 
//Ocak ayı için 1, Şubat ayı için 2, Mart ayı için 3, Nisan ayı için 4, Mayıs ayı için 5, Haziran ayı için 6, Temmuz ayı için 7, Ağustos ayı için 8, Eylül ayı için 9, Ekim ayı için 10, Kasım ayı için 11 ve Aralık ayı için 12 bilgi girildiğini varsayınız.). c. Sıcaklık veri girişi bittikten sonra o ayın sıcaklık ortalaması bilgisi ekrana yazdırılacaktır.
// Bu işlemden sonra program sonlanacaktır. Örnek Çıktı: Şubat Ayına ait Ortalama Sıcaklık=15,6 derecedir. 

#include<stdio.h>
#include <string.h>
int main()
{
    int secim,sicaklik,toplam;
    float sonuc;
    char aylar[] = {'O','S','M','N','M','H','T','A','E','E','K','A'};
   // const char *aylar[] = { "Ocak", "Şubat", "Mart","Nisan","Mayıs","Haziran","Temmuz","Agustos","Eylül","Ekim","Kasım","Aralık" };
   // printf("secilen ay %c",aylar[ay]);
   
   
    printf("Hangi ay icin sicaklik gireceksiniz: /Ocak ayı için 0, Şubat ayı için 1, Mart ayı için 2, Nisan ayı için 3, Mayıs ayı için 4, Haziran ayı için 5, Temmuz ayı için 6, Ağustos ayı için 7, Eylül ayı için 8, Ekim ayı için 9, Kasım ayı için 10 ve Aralık ayı için 11\n ");
    scanf("%d",&secim);
    printf("secim:%c",aylar[secim]);
    if(aylar[secim]=='S'){
      for(int i=0 ; i<28; i++){
        printf("::gun sayisi kadar sicaklik giriniz:");
         scanf("%d",&sicaklik); 
          toplam=toplam+sicaklik;
   
   }
   sonuc = toplam/28;
     
 }
   else{
   for(int i=0 ; i<3; i++){
        printf("::gun sayisi kadar sicaklik giriniz:");
        scanf("%d",&sicaklik); 
        toplam=toplam+sicaklik;
   
   }
    sonuc = toplam/3;
 }
   
    printf("%c ayina ait ortalama:%f",aylar[secim],sonuc);
    
   

}