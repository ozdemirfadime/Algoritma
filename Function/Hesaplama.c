#include<stdio.h>
double HesaplamaIslemiYap(double sayi1,double sayi2,char islem);
int main(){
    double sayi1;
    double sayi2;
    char islem;
    printf("islem giriniz");
    scanf("%c",&islem);
    printf("1.sayi giriniz");
    scanf("%lf",&sayi1);
    printf("2.sayi giriniz");
    scanf("%lf",&sayi2);
    

   double sonuc = HesaplamaIslemiYap(sayi1,sayi2,islem);
   printf("sonuc =%lf \n ",sonuc);

}
double HesaplamaIslemiYap(double sayi1,double sayi2,char islem){
 
    if(islem=='+')
    return sayi1+sayi2;
    else if (islem=='-')
    {
       return sayi1-sayi2;
    }
    else if(islem=='*')
        return sayi1*sayi2;
    else if(islem=='/')
        return sayi1/sayi2;
    
}