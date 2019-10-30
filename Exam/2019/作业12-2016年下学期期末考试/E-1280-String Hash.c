#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <bits/stdc++.h>
int main(){
    char str[1024];
    int i,length;
    __int64 result;
    while(scanf("%s",str) != EOF && getchar()){
        length = strlen(str);
        result = 1;
        for(i = 0;i <= length - 1;i++){
            result = result * 26 + str[i] - 'a';
            result %= 1000000007;
        }
        printf("%I64d\n",result);
    }
}
