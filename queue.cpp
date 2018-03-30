#include<iostream>
#include<mem.h>
using namespace std;
int p[1000001],q[1000001];
int main()
{
int n,x,y;

memset(q,0,1000001);
cin>>n;

while(n)
{
cin>>x>>y;
p[x]=y;
q[x]++;
q[y]--;
n--;
}

int i=0;
while(true)
{
if(q[i]==1)
break;
i++;
}
int j=p[0];
while(j&&i)
{
cout<<i<<" "<<j<<" ";
i=p[i];
j=p[j];
}
if(i)
cout<<i;
return 0;
}
