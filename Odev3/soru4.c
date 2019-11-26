//Klavyeden 100 girilene kadar girilen negatifsayıların âdetini ekrana y
#include<stdio.h>
int main(){
    int sayi;
    int adet;
    printf("sayi giriniz");
    scanf("%d",&sayi);
  do{ if(sayi<0)
    adet++;
    printf("adet %d",adet);}
    while(sayi==100)
}