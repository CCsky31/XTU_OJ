#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>
const int FIBONACCI_NUM = 30;
long long int Fibonacci[FIBONACCI_NUM];


int intpow(int num, int times)
{
    if (times == 0) return 1;
    if (times == 1) return num;
    int result = 1, i;
    for (i = times; i > 0; i--) {
        result *= num;
    }
    return result;
}

int main()
{
    //����쳲���������
    int T, i = 2;
    long long int num = 0;
    int result;
    Fibonacci[0] = 1;
    Fibonacci[1] = 2;
    for (i = 2; i < FIBONACCI_NUM; i++) {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    }

    scanf("%d", &T);
    while (T--) {
        scanf("%I64d", &num);
        i = 29; result = 0;
        while (i >= 0) {
            if (num >= Fibonacci[i]) {
                num -= Fibonacci[i];
                result += intpow(2, i);
            }
            i--;
        }
        printf("%d\n", result);
    }
    return 0;
}
