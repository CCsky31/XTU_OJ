#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>
int main() {
    int T,a,salary;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &a);
        salary = 200;
        for (; a > 100; a--) {
            salary += 2;
        }
        for (; a < 100 && a >= 0; a++) {
            salary -= 3;
        }
        printf("%d\n", salary);
    }
    return 0;
}
