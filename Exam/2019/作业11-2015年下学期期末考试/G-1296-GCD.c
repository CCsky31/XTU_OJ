#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>
int main()
{
    int T,a, b;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&a ,&b);
        a--;
        printf("%d\n", (b - (b/2 + b/3 - b/6)) - (a - (a/2 + a/3 - a/6)));
    }
    return 0;
}
