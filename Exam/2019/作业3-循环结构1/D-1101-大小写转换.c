#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
#include <string.h>
int main() {
    int a,n;
    char b[201];
    scanf("%d", &a);
    getchar ();
    do{
        gets(b);
        for (n=0;b[n]!='\0';n++){
            if (b[n] >= 65 && b[n] <= 90) {
                b[n] = b[n] + 32;
            }
            else if (b[n] >= 97 && b[n] <= 122) {
                b[n] = b[n] - 32;
            }
        }
        printf("%s\n",b);
        a--;
    } while (a > 0);
    return 0;
}