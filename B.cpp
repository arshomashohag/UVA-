#include<bits/stdc++.h>

#define eps 1e-9
#define pi acos(-1.0)
#define inf (1UL<<31)
#define infl (1ULL<<63)
#define mx 100000
#define pb(x) push_back(x)
#define all(a) (a).begin(),(a).end()
#define mp(x,y) make_pair((x),(y))
#define mset(m,v) memset(m,v,sizeof(m))
#define ll long long
#define ull unsigned long long
#define space ' '
using namespace std;

string s,ans;

int main()
{
    int n,i,k=0;
    cin>>n>>s;
    ans=s;
    while(k++<10)
    {
        for(i=0;i<n;++i)
        if(s[i]!='9')
        ++s[i];
        else
            s[i]='0';
    for(i=0;i<n;++i)
    {
        std::rotate(s.begin(),s.begin()+1,s.end());
        ans=min(ans,s);
    }
    }
    cout<<ans;
    return 0;
}
