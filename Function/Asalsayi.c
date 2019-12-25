#include<stdio.h>
int AsalSayimi(int s1);
int main(){
 int sonuc= AsalSayimi(5);
}
int AsalSayimi(int s1){
    
    int i=0,sonuc=0,sayac=0;

    
    for(i=0;i<=s1;i++)
    {
     int kalan=s1%i;
    if(kalan==0)
    sayac++;
}
 /*   if(sayac==2)
    sonuc=1;

    else 
    sonuc=0;
    return sonuc;*/
    if(sayac==2)
    return 1;
    else
    {
        return 0;
    }
    
}