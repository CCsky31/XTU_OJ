#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int main(){
    int count = 0, temp, is_xiaoyulin = 0, n;
    while (scanf("%d", &n) != EOF) {
        if (n < 0) {
            n = 0 - (n + 1);
            is_xiaoyulin = 1;
        }
        while (n) {
            temp = n % 2;
            n = n / 2;
            if (temp == 1)    count++;
        }
        if (is_xiaoyulin == 1)    count = 32 - count;
        printf("%d\n", count);
        is_xiaoyulin = 0;
        count = 0;
    }
    return 0;
}
