/*Ödev1: Klavyeden girilen 3 basamaklı sayıyı basamak
değerlerini ayıran programın algoritmasını ve akış
diyagramını yazınız.*/
#include<stdio.h>
int main(){
    int sayi;
    int birler;
    int onlar,yuzler;
    int ters;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);
    if(sayi>0)
    yuzler=(sayi/100);
     printf("yuzler :%d\n",yuzler);
     sayi=sayi-(yuzler*100);
     onlar=(sayi/10);
     printf("onlar:%d\n",sayi);
     sayi=sayi-(onlar*10);
     birler=sayi;
      printf("birler:%d\n",sayi);
      ters=(birler*100)+(onlar*10)+yuzler;
      printf("%d",ters);
      


    
}