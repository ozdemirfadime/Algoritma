//ki sayı arasında dört işlemden(toplama, çıkarma, çarpma, bölme) birini yapan programın çalışması şu şekilde olmalıdır; ilk önce iki sayının veri girişi yapılacak daha sonra ise kullanıcı hangi matematiksel işlemi yapmak istiyorsa o işlemin operatörünü klavyeden girecek ve iki sayı kullanıcının girdiği matematik operatörüne göre hesaplamasını yapıp sonucu ekrana yazdıracaktır.
// Bu işlemi yapan programı switch case ile,( toplama için +, çıkarma için -, çarpma için *, bölme için / veri girişi olduğunu varsayınız.)
#include<stdio.h>
int main(){
    
    float sayi1,sayi2,sonuc;
    char secim;
    
   
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
    printf(" sonuc:  %lf",sonuc);
}