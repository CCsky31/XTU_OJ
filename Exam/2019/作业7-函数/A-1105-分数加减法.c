#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int gcd(int _a, int _b) { //ȡ��С������
    int c;
    while (_b) {
        _a = _a % _b;
        c = _a;
        _a = _b;
        _b = c;
    }
    return _a;
}

int main() {
    int T,a1,b1,c1,d1,a2,b2,c2,d2;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
        //ͨ��
        a2 = a1 * d1;
        b2 = b1 * d1;
        c2 = c1 * b1;
        d2 = d1 * b1;

        //�����
        if ((a2 + c2) % b2 == 0) //����
            printf("%d", (a2 + c2) / b2);
        else
            if (b2 / gcd((a2 + c2), b2) < 0 && (a2 + c2) / gcd((a2 + c2), b2) > 0)
                printf("-%d/%d", (a2 + c2) / gcd((a2 + c2), b2), -1 * b2 / gcd((a2 + c2), b2));
            else if(b2 / gcd((a2 + c2), b2) < 0 && (a2 + c2) / gcd((a2 + c2), b2) < 0)
                printf("%d/%d", -1 * (a2 + c2) / gcd((a2 + c2), b2), -1 * b2 / gcd((a2 + c2), b2));
            else
                printf("%d/%d", (a2 + c2) / gcd((a2 + c2), b2), b2 / gcd((a2 + c2), b2));
            
        printf(" ");
        //�����
        if ((a2 - c2) % b2 == 0) //����
            printf("%d", (a2 - c2) / b2);
        else
            if(b2 / gcd((a2 - c2), b2) <0 && (a2 - c2) / gcd((a2 - c2), b2) > 0)
                printf("-%d/%d", (a2 - c2) / gcd((a2 - c2), b2), -1 * b2 / gcd((a2 - c2), b2));
            else if(b2 / gcd((a2 - c2), b2) < 0 && (a2 - c2) / gcd((a2 - c2), b2) < 0)
                printf("%d/%d", -1 * (a2 - c2) / gcd((a2 - c2), b2), -1 * b2 / gcd((a2 - c2), b2));
            else
                printf("%d/%d", (a2 - c2) / gcd((a2 - c2), b2), b2 / gcd((a2 - c2), b2));
        printf("\n");
    }
    return 0;
}
