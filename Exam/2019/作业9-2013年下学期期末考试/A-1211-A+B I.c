#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int a, b, c;
        scanf("%d+%d=%d", &a, &b, &c);
        if (a + b == c) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
