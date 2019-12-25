#include<stdio.h>
int KarelerinToplami(int sayi);
int main(){
    /*int sayi;
    printf("sayi giriniz");
    scanf("%d",&sayi);
     int sonuc = KarelerinToplami(sayi);
    printf("%d \n",sonuc);*/
    int sonuc=KarelerinToplami(5);
    printf("sonuc : %d",sonuc);
    
         

}
int KarelerinToplami(int sayi){
    int toplam=0;
    if(sayi==1)
    toplam=1;
    else
    toplam = sayi*sayi+KarelerinToplami(sayi-1);
     return toplam; 
     5
     25
     16
     9
     4
     1      

}
/*

#include<stdio.h>
void KarelerinToplami(int sayi);
int main(){
    /*int sayi;
    printf("sayi giriniz");
    scanf("%d",&sayi);
     int sonuc = KarelerinToplami(sayi);
   // printf("%d \n",sonuc);
    KarelerinToplami(5);
         

}
void KarelerinToplami(int sayi){
    int toplam=0;
   for(int j=1;j<=sayi;j++)
       {
           toplam=toplam+j*j;
           printf("%d \n",toplam);
       }            

} 
*/