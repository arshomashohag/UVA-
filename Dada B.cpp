#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <list>
#include <cstdio>

using namespace std;

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define inf (1<<29)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2};
int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1};



int main()
{   long long int c[10000],d,e;
    long double a,b,k,max;
    scanf("%Lf%Lf",&a,&b);
    for(d=0;d<a;d++)
    {
        scanf("%lld",&c[d]);
    }
    sort(c ,c+d);
    for(d=0,e=1, max=c[d];d<a-1;d++,e++)
    {
        k=(c[e])-(c[d]);
        k=k/2.0;
        if(max<k)
        {max=k;
        }
            }
    printf("%.10Lf\n",max);


    return 0;
}
