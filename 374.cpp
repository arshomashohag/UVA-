#include<bits/stdc++.h>
#define lld long long int
using namespace std;



lld MOD(lld b, lld p, lld m){
 if(p==0){
    return 1;
 }
 if(p%2==0){
    lld r = MOD(b, p/2, m);
    return (r*r)%m;
 }
 return (b*MOD(b, p-1, m))%m;

}

int main(void)
{
    lld b, p, m;
    while(scanf("%lld%lld%lld", &b, &p, &m)==3){
        printf("%lld\n", MOD(b, p, m));
    }

    return 0;
}
