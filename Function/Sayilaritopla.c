#include<stdio.h>
void SayilariTopla(int s1, int s2);
int main(){
    SayilariTopla(5,6);
    return 0;
}
void SayilariTopla(int s1, int s2)
{
    int toplam=0;
    toplam=s1+s2;
    printf("toplam sonucu= %d",toplam);
}