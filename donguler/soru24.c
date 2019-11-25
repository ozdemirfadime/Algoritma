/*Klavyeden girilen sayının faktöriyelini hesaplayan ve ekrana yazan algoritmayı yazınız.*/
#include<stdio.h>
int main(){
   /* int sayi1;
   int faktoriyel=1;
    printf("sayi giriniz");
    scanf("%d",&sayi1);
    for(int i=sayi1;i>=1;i--)
    {faktoriyel=faktoriyel*i;}

    printf("%d",faktoriyel);
    */
   int sayi1;
   int faktoriyel=1;
   printf("sayi giriniz");
     scanf("%d",&sayi1);
    do{   
     faktoriyel=faktoriyel*sayi1;
        sayi1=sayi1-1;
        if(sayi1<=1)
        printf("%d",faktoriyel);
        }       
     while(sayi1>0);

   
}