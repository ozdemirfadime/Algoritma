#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int tahmin,sayi;
    srand(time(NULL));
    sayi=1+rand()%100;
   do {printf("sayi giriniz");
    scanf("%d",&tahmin);
    if(tahmin>sayi){
        printf("aşaği in \n");

    }
    else  if (sayi>tahmin)
    printf("yukarı çık \n");
    else
    printf("tebrikler başardınız \n");}
    while(tahmin!=sayi);
   



}