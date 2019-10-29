//Klavyeden girilen bir sayının küpünü bulup ekrana yazdıran programın,
#include<stdio.h>
int main()
{
int sayi;
int kup;
printf("sayi giriniz");
scanf("%d ",&sayi);
kup = sayi*sayi*sayi;
printf(" %d",kup);
return 0;

}
