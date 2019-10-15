#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int T,a,b,c,x,y,z;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &a, &b,&c);
        if (c == 1) {
            if (a == b && b != 0) {
                printf("0\n");
            }
            else if (a == b && b == 0) {
                printf("1\n");
            }
            else if (a != b) {
                printf("None\n");
            }
        }
        else if (c == 0) {
            if (a == 0 && b != 0) {
                printf("0\n");
            }
            else if (a == 0 && b == 0) {
                printf("None\n");
            }
            else if (a > 0) {
                printf("None\n");
            }
        }
        else if (c > 1) {
            if (b * c > a) {
                printf("None\n");
            }
            else if (a == b) {
                printf("None\n");
            }
            else {
                x = b * c - a;
                y = 1 - c;
                if (x % y == 0) {
                    printf("%d\n", (x / y));
                }
                else {
                    printf("None\n");
                }
            }
        }    
    }
    return 0;
}
