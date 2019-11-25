/*Klavyeden 1. ve 2. Sayı ile işlem yapılmak istenen operatör ( +, -, *, / ) girildikten sonra işlem operatörüne
göre işlemi yapıp sonucu ekrana yazdıktan sonra;*/
#include<stdio.h>
int main()
{
    float sayi1,sayi2,sonuc;
    char secim;
    char devam;
   
   
   
     printf("secim giriniz\n");
    scanf(" %c",&secim);
    printf("sayi1 giriniz \n");
    scanf(" %f",&sayi1);
    printf("sayi2 giriniz \n");
    scanf(" %f",&sayi2);
     switch (secim)
    {
    case '+':
       sonuc=sayi1+sayi2;
        break;
    case '-':
       sonuc=sayi1-sayi2;
        break;
    case '*':
       sonuc=sayi1*sayi2;
        break;
    case '/':
       sonuc=(sayi1)/(sayi2);
        break;
    default:
    printf("hatalı secim");
        break;
      
    }
     printf("%f",sonuc);
     float y;
     y= 8 / 4 -2 * 2 / 4 – 3 + 6 / 3 - 1;
     printf("%f",&y);
    }
   