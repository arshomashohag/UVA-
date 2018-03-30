#include<bits/stdc++.h>

#define lld long long int 

using namespace std;

int main(void)
{
    lld in, out, a, b;
    
    while(scanf("%lld",&in) && in)
    {
        a = 1;
        
        while(a<=in)
        {
            a *= 2;
            b = a%in;
        }
        
        out = in - b;
        printf("%lld\n", out);
    
    }
    return 0;
}