/*Ax2+Bx+C=0denklemindeki A, B ve C değerleri klavyeden girildikten sonra x değerlerini bulan programın kodlarını yazınız*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x;
     printf("a giriniz");
    scanf("%d",&a);
       printf("b giriniz");
    scanf("%d",&b);
       printf("c giriniz");
    scanf("%d",&c);
    int diskirimant =b*b-(4*c*a);
if(diskirimant>0)
  {  x=(-b+sqrt(diskirimant)/(2*a));
    x1=(-b-sqrt(diskirimant)/(2*a));}

 else if(diskirimant ==0)
 { x=-b/(2*a);
  x1==x;
  }
else 
  
      printf("real kök yoktur");
  
printf("x x1 %lf %lf",x,x1);
  
}