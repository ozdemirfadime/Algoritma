/*Her test türünde 4 yanlışın 1 doğruyu götürdüğü 100 soruluk bir sınavda her soruya Türkçe için
2, fen bilgisi için 4 ve matematik için 5 puan verilmektedir. Derslere göre doğru ve yanlış sayısı
girildiğinde her dersin puanını, dersin net sayısını, toplam puanı ve toplam net sayısını gösteren
programın,*/
#include<stdio.h>
int main()
{
    int TD;
    int TY;
    int MD;
    int MY;
    int FD;
    int FY; 
    double TNET;
     double MNET;
     double FNET;
      double TopmlamNet;
      double ToplamPuan;
      double TPuan;
      double MPuan;
      double FPuan;


    printf("Türkçe doğru sayısı giriniz ");
    scanf("%d",&TD);
     printf("Türkçe yanlış sayısı giriniz ");
       scanf("%d",&TY);
    printf("Matematik doğru sayısı giriniz ");
      scanf("%d",&MD);
    printf("Matematik yanlış sayısı giriniz ");
      scanf("%d",&MY);
    printf("Fen doğru sayısı giriniz ");
      scanf("%d",&FD);
      printf("Fen yanlış sayısı giriniz ");
        scanf("%d",&FY);
        TNET= TD-(TY/4);
        MNET=MD-(MY/4);
        FNET=FD-(FY/4);
        TPuan=TNET*2;
        FPuan=FNET*4;
        MPuan=MNET*5;
        TopmlamNet=TNET+FNET+MNET;
        ToplamPuan=TPuan+FPuan+MPuan;
        printf("%lf\n",TopmlamNet);
        printf("%lf\n",ToplamPuan); 
       printf("%lf\n",TPuan);
       printf("%lf\n",FPuan);
       printf("%lf\n",MPuan);
        printf("%lf\n",TNET);
        printf("%lf\n",FNET);
        printf("%lf\n",MNET);
        


}