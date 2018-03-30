#include<cstdio>
#include<vector>
#define lld long long int

using namespace std;

int main(void)
{
 lld x, y, i, j, r, c;
 vector<lld> save;

 while(scanf("%lld%lld",&x,&y)==2)
 {
     save.clear();
    printf("[%lld;",x/y);
     r=x%y;
     c=0;
     while(r>1)
     {
       x=y;
       y=r;
       save.push_back(x/y);
       r=x%y;
       c++;
     }
    save.push_back(y);


    for(i=0; i<c; i++)
    {
        printf("%lld,",save[i]);
    }

    printf("%lld]\n",save[c]);
 }

    return 0;
}
