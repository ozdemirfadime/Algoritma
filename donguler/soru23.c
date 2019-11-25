/*Klavyeden 1. ve 2. Sayı ile işlem yapılmak istenen operatör ( +, -, *, / ) girildikten sonra işlem operatörüne
göre işlemi yapıp sonucu ekrana yazdıktan sonra;
“Tekrar hesaplama yapmak istiyor musunuz?” sorusunu sorarak Klavyeden “E” harfi girilirse tekrardan
hesaplama yapmak için soruyu soran programın algoritmasını yazınız.*/
#include<stdio.h>
int main()
{
    float sayi1,sayi2,sonuc;
    char secim;
    char devam;
   
   
    do{
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
     printf("devam etmek istiyor musnuz\n");
    scanf(" %c",&devam);
    }while (devam =='E' || devam =='e');

    {
        printf("%f",sonuc);
    }
    
     
    
}