/*Klavyeden girilen iki sayının faktöriyellerinin toplamını 
ekrana yazan algoritmayı yazınız.*/
#include<stdio.h>
int main()
{
    int sayi1,sayi2;
    int toplam=0;
      
    printf("sayi1 ve sayi2 giriniz giriniz");
    scanf("%d %d",&sayi1,&sayi2);
   int  fak1=1;
   int  fak2=1;
   if(sayi1 >0){
    {for(int i=sayi1;i>=1;i--)
    fak1=fak1*i;
    }
        if(sayi2>0)
       { 
        for(int i=sayi2;i>=1;i--)
        fak2=fak2*i;
        }
    toplam=fak1+fak2;
    printf("%d",toplam);

}
}
/*
do {if(sayi1>0)
{
    fak1=fak1*sayi1;
    sayi1=sayi1-1;
}
if(sayi2>0)
{
    fak2=fak2*sayi2;
    sayi2=sayi2-1;
}}
while(sayi1<=1 && sayi2 <=1);
toplam=fak1+fak2;
printf("%d",toplam);
}*/