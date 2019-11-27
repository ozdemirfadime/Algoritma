//10.Klavyeden girilen bir tam sayının asal sayı olup olmadığını bulan programın kodlarını yazınız.(sadece1 ve kendisine tam bölünebilen sayılara asal sayı denir.
#include<stdio.h>
int main(){
    int sayi,sayac;
     printf("sayı giriniz");
    scanf("%d",&sayi);
    for(int i=2;i<sayi;i++)
    {
    if((sayi%i==0))
    {
         sayac++;
        }}


    if(sayac==0)
        {
            printf("sayi asal");

        }
    else
           {
        printf("sayi asal değildir");
    }
}