
#include<cstdio>
#include<iostream>
#include<cmath>


using namespace std;

int main(void)
{
    double n, m, a, b, out;
    int t, cn=1;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf%lf%lf%lf",&n,&m,&a,&b);
        out =  ((m*(a+b))-(a*n))/b;

        printf("Case #%d: ",cn++);
        if(n<0 || m<0 || out<0 || out>10)
            printf("Impossible\n");
        else
            printf("%0.2lf\n",out);
    }

return 0;
}
