//求int型正整数在内存中存储时1的个数
#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==1)
            cnt++;
        n=n/2;
    }
    printf("%d",cnt);
    return 0;
}