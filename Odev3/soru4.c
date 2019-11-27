<<<<<<< HEAD
//Klavyeden 100 girilene kadar girilen negatif sayıların âdetini ekrana y
#include<stdio.h>
int main(){
    int sayi;
    int adet=0;
    
  do{ 
    printf("sayi giriniz");
    scanf("%d",&sayi);
    if(sayi<0)
    adet++;
    }
    while(sayi!=100);
    printf("adet %d",adet);
=======
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
>>>>>>> 944b25b598d3aa5b645446953d398a96e349cc22
}