#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ

//����Ϊ��������



#include <stdio.h>
#include <math.h>
int main()
{
   double x,y,a,b,c,d,e;
   scanf ("%lf %lf %lf %lf",&a,&b,&c,&d);
   x=c-a;
   y=d-b;
   e=pow(x,2)+pow(y,2);
   e=sqrt(e);
   printf("%g\n",e);
}