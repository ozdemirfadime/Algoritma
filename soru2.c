/*Bir çalışanın brüt maaşı çalıştığı saate göre hesaplanmaktadır. Çalıştığı her saat için 15TL ücret
almaktadır. Brüt maaşın %15’i sigorta primi için ve brüt maaşın %10’u devlete vergi olarak
ayrılmaktadır. Buna göre çalışanın saat bilgisi klavyeden girildikten sonra alacağı net maaşı
hesaplayan ve ekrana brüt maaşı, sigorta primi, vergi ve net maaş bilgilerini ekrana yazan
programın,*/
#include<stdio.h>
int main(){
    int saat;
    float sigorta;
    float vergi;
    float burut;
    float netmaas;
    printf("çalışılan saati giriniz \n");
    scanf("%d",&saat);
    burut=15*saat;
    sigorta=burut*0.15;
    vergi=burut*0.1;
    netmaas=burut-(sigorta+vergi);
    printf("%f\n",burut);
    printf("%f\n",sigorta);
    printf("%f \n",vergi);
    printf("Net maas: %f \n",netmaas);

}
