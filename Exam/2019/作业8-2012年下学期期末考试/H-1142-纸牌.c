#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>
int main() {
    int n, pos, times;
    for (; scanf("%d", &n) != EOF && n; printf("%d\n", times))
        for (times = pos = 1; (pos = pos > n ? (pos - n) * 2 - 1 : pos * 2) - 1; times++);
    return 0;
}
