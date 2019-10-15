#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
#include <string.h>
// 120(3) -> 15(10): 0*3^0 + 2*3^1 + 1*3^2
int c2d(char x) {//�ַ�ת����
    if (48 <= x && x <= 57) {
        return x - 48;//0-9
    }
    else if (65 <= x && x <= 90) {
        return x - 65 + 10;//A-Z  = 10-35
    }
    else if (97 <= x && x <= 122) {
        return x - 97 + 36;//a-z = 36-62
    }
    return 0;
}

int pow(int num, int times) { //�˷�
    int result = 1, i;
    for (i = times; i > 0; i--) {
        result *= num;
    }
    return result;
}

int x2d(char* num, int x){ //x����ת��Ϊ10����
    int i=1,max = strlen(num),result=0,temp=0,sign = 1;//iΪ�����±� , maxΪ�ַ������� , max-1Ϊ��������±�
    //�����ж�
    if (num[0] == '-') {
        sign = -1;
    }
    else if (num[0] == '+') {
        sign = 1;
    }
    else {
        temp = c2d(num[0]);
        result += temp * pow(x, max - 1);
    }
    for (; i <= max - 1; i++) {
        temp = c2d(num[i]);
        result += temp * pow(x, max - i - 1);
    }
    return result*sign;
}

int main() {
    int T,a,b,m,n;
    char x[32], y[32];
    scanf("%d", &T);
    getchar();
    while (T--) {
        scanf("%s %d %s %d", x, &a, y, &b);
        m = x2d(x,a);
        n = x2d(y,b);
        printf("%d\n", m + n);
    }
    return 0;
}
