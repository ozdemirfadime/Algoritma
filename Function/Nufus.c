
#include<stdio.h>
double Nufus(double baslangicNufus,double artisOrani,int yil);
int main(){
   double baslangicNufusu,artisOrani;
   int yil;
    printf("baslangic nufusu  giriniz");
    scanf("%lf",&baslangicNufusu);
    printf("Artis Orani");
    scanf("%lf",&artisOrani);

    printf("istenilen yil");
    scanf("%d",&yil);

    double sonuc = Nufus(baslangicNufusu,artisOrani,yil);
    printf("tahmini Nufus :%lf \n ",sonuc);



}
double Nufus(double baslangicNufusu,double artisOrani,int yil){
     /*int simdikiYil = 2019;
     int FarkYili=yil-simdikiYil;*/
     double tahminiNufus=baslangicNufusu;
     for(int i=1;i<=yil;i++)
   { 
    tahminiNufus=tahminiNufus+artisOrani;}
     return tahminiNufus;
}
   
   ////////////////////////////////////////////
  /* 

double nufus(double baslangicNufus, double artisOrani, double yil);
double toplam=0,sonuc=0;;

void main()
{
  sonuc=nufus(10,10,5);
  printf("%lf", sonuc);
}

double nufus (double baslangicNufus, double artisOrani, double yil)
{
     toplam=baslangicNufus;
  for(int i=0; i<yil; i++){
  toplam=toplam+artisOrani;
 }
  return toplam;
}*/

