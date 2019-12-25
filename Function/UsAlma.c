#include <stdio.h>
#include <stdlib.h>
int us_al (int taban, int us);
int main() {
	int n,p;

    printf("Ussunu Almak istediginiz sayi:");
    scanf("%d", &n);
    printf("Kac Us Alinacagini giriniz:");
    scanf("%d", &p);
    int sonuc = us_al(n,p);
	printf("Sonuc: %d \n", sonuc);
} 
 
int us_al (int taban, int us)
{
    int sonuc=1;
    while ( us != 0)
    {
        sonuc *= taban;
        us--;
    }
    return sonuc;
 
}