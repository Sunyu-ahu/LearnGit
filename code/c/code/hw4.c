//字符串反转
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    gets(str);
    int len=strlen(str);
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}