#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
#include <string.h>

int LegalIdentifier(char* _string) {
    char *p;
    char keyword[512] = "auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while";
    p=strtok(keyword, " ");
    int i;
    while (p != NULL) {
        if (strcmp(_string, p) == 0) {
            return 0;
        }
        p = strtok(NULL, " ");
    }
    if ('0' <= _string[0] && _string[0] <= '9') return 0;
    for (i = 0; i < strlen(_string); i++) {
        if ('a' <= _string[i] && _string[i] <= 'z');
        else if ('A' <= _string[i] && _string[i] <= 'Z');
        else if ('0' <= _string[i] && _string[i] <= '9');
        else if (_string[i] == '_');
        else return 0;
    }
    return 1;
}


int main() {
    int T;
    char s[36];
    scanf("%d", &T);
    while (T--) {
        scanf("%s", s);
        if (LegalIdentifier(s) == 1) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}
