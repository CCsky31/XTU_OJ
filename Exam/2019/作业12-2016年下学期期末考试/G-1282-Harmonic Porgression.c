#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <bits/stdc++.h>
using namespace std;


int main()
{
    unsigned long long t;
        scanf("%I64d",&t);
    while(t--){
        unsigned long long x ,y;
        scanf("%I64d %I64d",&x,&y);
        if(x == y)
            printf("1/%I64d\n", x);
        else{
            unsigned long long a = 1;
            unsigned long long b = x;
            unsigned long long t;
            for(x++; x <= y; x++){
                a = a * x + b;
                b = b * x;
                t = __gcd(a, b);
                a /= t;
                b /= t;
            }
            t = __gcd(a, b);
            if(a % b)
                printf("%I64d/%I64d\n", a / t, b / t);
            else
                printf("%I64d\n", a / b);
        }
    }
    return 0;
}
