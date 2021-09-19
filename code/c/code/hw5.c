//f(n) = f(n-1) + n/3 + (n%3+1)/3
#include <stdio.h>
int main(void){
    int n;
    while((scanf("%d", &n) == 1) && n)
    {
        int sum = 0;
        int t;
        while(n > 2)
        {
            t = n/3;
            sum += t;
            n = t + n%3;
        }
        if(n == 2) ++sum;
        printf("%d\n", sum);
    }
    return 0;
}