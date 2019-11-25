/*Ax 2 +Bx+C=0 denklemindeki A, B ve C değerleri klavyeden girildikten sonra x değerlerini bulan
programın,*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int dis;
    int x1,x2;
    printf("a sayısını giriniz");
    scanf("%d\n",&a);
    printf("b sayısını giriniz");
    scanf("%d\n",&b);
    printf("c sayısını giriniz");
    scanf("%d\n",&c);
    dis=b*b-(4*a*c);
    if(dis>0)
    {
        x1=(-b+dis)^(1/2)/(2*a);
        x2=(-b-dis)^(1/2)/(2*a);
        printf("%d %d",x1,x2);

    }
    if(dis == 0)
    {
        x1=b/(2*a);
        printf("%d",x1);

    }
    else 
    printf("reaal kök yok");
return 0 ;
}