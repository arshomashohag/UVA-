#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<list>

using namespace std;

int n, a, i, j;
char x[1006], y[1005], temp[1005];

string save[500000];


string sumstring(const string a, const string b)
{
  int la, lb, car=0, dig, i, j;
  string ret;
  list<int> myl;
  la = a.size()-1;
  lb = b.size()-1;

  for(; la>=0 || lb>=0; la--, lb--)
  {
      dig = car;
      if(la>=0)
        dig = dig + (a[la]- 48);
      if(lb>=0)
        dig = dig + (b[lb] - 48);

      car = dig/10;
      dig = dig%10;

      myl.push_front(dig);
  }
  if(car)
    myl.push_front(car);

  while(!myl.empty())
  {
    ret.push_back(myl.front()+48);
    myl.pop_front();
  }

return ret;
}

string fib(int n)
{
 if(n<=2)
    return "1";

 string ret1, ret2;
 if(save[n].size()>0)
    return save[n];

 ret1 = fib(n-1);
 ret2 = fib(n-2);
 save[n] = sumstring(ret1, ret2);

 return save[n];
}

int main(void)
{

   while(scanf("%d",&n)==1)
   {
     cout<<fib(n)<<endl;
   }

    return 0;
}
