/*Girilen sıcaklık değerine göre bir suyun katı, sıvı ve gaz olma durumunu ekrana yazdıran
programın,*/
#include<stdio.h>
int main()
{
    int sicaklik;
    printf("sicaklık değerini giriniz");
    scanf("%d",&sicaklik);
    if(sicaklik<0)
    printf("katı");
    if(sicaklik >= 0 && sicaklik<100)
    printf("sıvı");
    else
    {
        printf("gaz");
    }
    
}