#include <stdio.h>
long int CW(int n)
 {
    if (n == 0) return 1;
    if (n == 1) return 0;
    long int a = 1; 
    long int b = 0; 
for (int i = 2; i <= n; ++i) 
{
        long long temp = (i - 1) * (a + b);
        a = b;
        b = temp;
    }
return b;
}
int main() 
{
    int n;
    scanf("%d", &n);
    printf("%ld\n", CW(n));
    return 0; 
}
