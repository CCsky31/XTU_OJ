#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>
#include<math.h>
int main(){
    int k,x,y,m,n,a,b,c,aa,ba,ca,da;
    double ea,fa;
    scanf("%d",&k);
    while(k--){
        scanf("%d %d",&x,&y);
        if(x<y){
            x=x+y;
            y=x-y;
            x=x-y;
        }
            aa=x*x-y*y;
            ea=sqrt(aa);
            ba=ea;
            m=aa-ba*ba;
            if(x!=y&&m==0) printf("%d\n",ba);
            else
            {
                aa=x*x+y*y;
            ea=sqrt(aa);
            ba=ea;
            n=aa-ba*ba;
                if(n==0) printf("%d\n",ba);
                else printf("None\n");
            }
    }
    return 0;

}
