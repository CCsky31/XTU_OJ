#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

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
