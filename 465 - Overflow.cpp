#include<cstdio>
#include<string>
#include<iostream>
#define CM (2<<31)-1
#define lld long long int

using namespace std;

bool chk(const string a)
{
    int l, i, j;
    l = a.size();
    lld temp=0;
    for(i=0; i<l; i++)
    {
      temp = (temp*10)+(a[i]-48);
      if(temp>CM)
        return false;
    }
    return true;
}

int main(void)
{

string a, b, c;
bool fn, sn, rn;
long long int in, temp;

while(cin>>a>>c>>b)
{
    if(a.size()==0)
        break;
    fn = chk(a);
    sn = chk(b);

    if(fn && sn)
    {
      rn =
    }
}

    return 0;
}
