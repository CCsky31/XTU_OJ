#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, a, t;
    char s[999]; 
    scanf("%s", s);
    while(s[0] != '0'){
        n = 0;  
        for(i = 0; i < strlen(s); i++)
            n += s[i]-'0';
        
        while(n > 9){  
            t = n;    
            a = 0; 
            while(t){
                a += t % 10;
                t /= 10;    
            }
            n = a;
        }
        printf("%d\n", n);
        scanf("%s", s);
    }
    return 0;
}
