/*İki sayı arasında dört işlemden (toplama, çıkarma, çarpma, bölme) birini yapan bir program
yazılması istenmektedir. Programın çalışma şekli şu şekilde olmalıdır; ilk önce iki sayının veri
girişi yapılacak daha sonra ise kullanıcı hangi matematiksel işlemi yapmak istiyorsa o işlemin
operatörünü bir karakter olarak klavyeden girecek. İki sayı kullanıcının girdiği matematik
operatörüne göre hesaplamasını yapıp sonucu ekrana yazdıracaktır. Bu işlemi yapan program,
( toplama için +, çıkarma için -, çarpma için *, bölme için / veri girişi olduğunu varsayınız.)*/
#include<stdio.h>
int main()
{
    int sayi1;
    int sayi2;
   int secim;
    int sonuc;
    printf("1.sayı giriniz");
    scanf("%d",&sayi1);
    printf("2.sayı giriniz");
    scanf("%d",&sayi2); 
    printf("secim giriniz \n 1:toplama 2:çıkarma 3:carpma 4:bölme");
    scanf("%d",&secim);

    if(secim == 1)
   { sonuc = sayi1+sayi2;}

    if(secim == 2);
   { sonuc = sayi1-sayi2;}

    if(secim == 3)
   { sonuc = sayi1*sayi2;}

    if(secim == 4)
  { sonuc = sayi1/sayi2;}
printf("%d",sonuc);

}