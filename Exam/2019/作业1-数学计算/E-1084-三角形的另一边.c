#include <stdio.h>
#include <math.h>
int main(){
   double PI=3.1415926,a,b,c,d,e;
   scanf ("%lf %lf %lf",&a,&b,&c);
   d=PI/180*c;
   e=a*a+b*b-2*cos(d)*a*b;
   e=sqrt(e);
   printf("%g\n",e);
}