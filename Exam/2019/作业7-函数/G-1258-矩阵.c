#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int T,size,num,i,m,n,position,times;
    char command;
    int x[10][10],temp[10];
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &size, &num);
        getchar();
        //初始化数组
        for (m = 0; m < 10; m++) {
            for (n = 0; n < 10; n++) {
                x[m][n] = -1;
            }
        }
        //填充数组
        i = 1;
        for (m = 0; m < size; m++) {
            for (n = 0; n < size; n++) {
                x[m][n] = i++;
            }
        }
        while (num--) {
            scanf("%c %d %d", &command, &position, &times);
            getchar();
            for (i = 0; i < 10; i++) {
                temp[i] = 0;
            }
            if (command == 'L') {
                for (i = 0; i < size; i++) {
                    temp[(i - times) < 0 ? (i - times + size) : (i - times)] = x[position - 1][i];
                }
                for (i = 0; i < size; i++) {
                    x[position - 1][i] = temp[i];
                }
            }
            if (command == 'R') {
                for (i = 0; i < size; i++) {
                    temp[(i + times) >= size ? (i + times - size) : (i + times)] = x[position - 1][i];
                }
                for (i = 0; i < size; i++) {
                    x[position - 1][i] = temp[i];
                }
            }
            if (command == 'U') {
                for (i = 0; i < size; i++) {
                    temp[(i - times) < 0 ? (i - times + size) : (i - times)] = x[i][position - 1];
                }
                for (i = 0; i < size; i++) {
                    x[i][position - 1] = temp[i];
                }
            }
            if (command == 'D') {
                for (i = 0; i < size; i++) {
                    temp[(i + times) >= size ? (i + times - size) : (i + times)] = x[i][position - 1];
                }
                for (i = 0; i < size; i++) {
                    x[i][position - 1] = temp[i];
                }
            }
        }
        for (m = 0; m < size; m++) {
            for (n = 0; n < size; n++) {
                if (m == 0 && n == 0) {
                    printf("%d", x[m][n]);
                }
                else {
                    printf(" %d", x[m][n]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
