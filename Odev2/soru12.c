/*Bir öğrencinin klavyeden girilen 100 lük notunu harfe çeviren bir program yazılması
istenilmektedir. Aşağıdaki kurallara göre harf notu ekrana yazdırılmak istenmektedir,
a. 0<=notu<25  F
b. 25<=notu<45  E
c. 45<=notu<55  D
d. 55<=notu<70  C
e. 70<=notu<85  B
f. 85<=notu<=100  A
Bu işlemi yapan programın,*/
#include<stdio.h>
int main()
{
    int notu;
    printf("notunuzu giriniz");
    scanf("%d",&notu);

    if(notu>=0 && notu<25)
    printf("harf notu: F");
    if(notu>=25 && notu<45)
    printf("harf notu: E");
    if(notu >=45 && notu<55)
    printf("harf notu: D");
    if(notu>=55 && notu<70)
    printf("harf notu: C");
    if(notu >=70 && notu<85)
    printf("harf notu: B");
    if(notu >=85 && notu<=100)
    printf("harf notu: A");

}