/*Bir öğrencinin bir dersten aldığı başarı notunun hesaplanması şu şekilde olacaktır,
a. Öğrenci 3 adet Kısa sınav, 2 adet Vize sınavına ve 1 adet Final sınavına girmektedir.
b. Kısa sınav notları ve vize notları klavyeden girilerek bu notların aritmetik ortalamaları
alınacaktır,
c. Son olarak final notu girilerek, başarı puanı hesaplanıp ekrana yazılacaktır.
d. Başarı puanı şu şekilde hesaplanmaktadır : BP = (KS ort * 50/100 +V ort * 50 / 100 ) * 40/100
+ F * 60/100;
Not : BP : Başarı puanı, KS ort :Kısa sınavların not ortalaması, V ort :Vizelerin not ortalaması, F:
Final Notu
Bu işlemi yapan programın,*/
#include<stdio.h>
int main()
{
    int kisaSinav1;
    int kisaSinav2;
    int kisaSinav3;
    int vize1;
    int vize2;
    int final;
    double KSort;
    double Vort;
    double BP;
    printf("1. kisa sınav giriniz ");
    scanf("%d",&kisaSinav1);
    printf("2. kisa sınav giriniz ");
     scanf("%d",&kisaSinav2);
    printf("3. kisa sınav giriniz ");
     scanf("%d",&kisaSinav3);
     printf("1.vize sınavı giriniz ");
      scanf("%d",&vize1);
        printf("2.vize sınavı giriniz ");
      scanf("%d",&vize2);
        printf("final sınavı giriniz ");
      scanf("%d",&final);
      KSort = (kisaSinav1+kisaSinav2+kisaSinav3)/3;
        Vort = (vize1+vize2)/2;
        BP =( (KSort*0.2+Vort*0.2)*0.4+final*0.6);
        printf("başari notu:%lf",BP);

}