#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int pow_int(int _a, int _b) {
    int x=_a;
    for (int i = _b - 1; i > 0; i--) {
        x = x * _a;
    }
    //printf("pow result:%d\n", x);
    return x;
}
int main() {
    int n,i=1,sum=0,j,root;
    while (scanf("%d", &n) != EOF && n) {
        root = n;
        sum = 0;
        i = 1;
        while (n > 10) {
            n = n / 10;
            i++;
        }
        //printf("λ��:%d\n", i);
        n = root;
        while (n > 10) {
            //printf("Sum:%d + pow(%d,%d)\n", sum,n%10,i);
            sum = sum + pow_int(n % 10, i);
            n = n / 10;
        }
        sum += pow_int(n, i);
        //printf("%d %d", sum, root);
        if(sum == root) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
