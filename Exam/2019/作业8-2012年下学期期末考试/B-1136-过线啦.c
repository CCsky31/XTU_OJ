#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int n, a, b, judge = 1, sum = 0, i;
        int grade[100];
        scanf("%d %d %d", &n, &a, &b);
        i = n;
        judge = 1;
        sum = 0;
        while (n--) {
            scanf("%d", &grade[n]);
            sum += grade[n];
            if (grade[n] < b)
                judge = 0;
        }
        if (sum < (i * a))
            judge = 0;
        if (judge == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}