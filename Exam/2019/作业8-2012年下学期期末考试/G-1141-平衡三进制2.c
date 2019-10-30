#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<stdio.h>
#include<string.h>

int main() {
    int T,num;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &num);
        if (num == 0) {
            printf("0\n");
            continue;
        }
        char str[32], result[32];
        int i = 0, tmp = num;
        bool isJinWei = false;
        for (i = 0; i < 32; i++) {
            str[i] = '0';
        }
        i = 0;
        while (tmp > 0) {
            str[i] = tmp % 3 + '0';
            tmp /= 3;
            i++;
        }
        for (tmp = 0; tmp < i; tmp++) {
            if (isJinWei) {
                str[tmp] += 1;
                isJinWei = false;
            }
            if (str[tmp] == '2') {
                str[tmp] = '-';
                isJinWei = true;
            }
            else if (str[tmp] == '3') {
                str[tmp] = '0';
                isJinWei = true;
            }

        }
        if (isJinWei) {
            str[tmp++] += 1;
        }
        while (tmp--)
            printf("%c", str[tmp]);
        printf("\n");
    }
}