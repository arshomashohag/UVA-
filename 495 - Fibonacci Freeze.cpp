#include<cstdio>
#include<string>
#include<list>
#include<iostream>

using namespace std;
string save[1005];



string sumstr(const string a, const string b)
{
    int sa, sb, i, j, car=0;
    list<char> temp;
    string ret;

    char in;
    sa = a.size()-1;
    sb = b.size()-1;

    for(i=sa, j=sb; i>=0 || j>=0; )
    {
      if(i>=0)
        {
            car = car + (a[i]-'0');
            i--;
        }
        if(j>=0)
        {
          car = car + (b[j]-'0');
            j--;
        }

      in = (car%10)+48;
      car = car/10;
      temp.push_back(in);
    }
  if(car)
    temp.push_back(car+48);
    while(!temp.empty())
    {
        ret.push_back(temp.back());
        temp.pop_back();
    }

    return ret;
}

string fib(int n)
{
    if(n==0)
        return "0";
    if(n==1)
        return "1";
    if(save[n].size()>0)
        {
           return save[n];
        }



    return (save[n] = sumstr(fib(n-1), fib(n-2)));
}


int main(void)
{
  int n;
  string out;

   while(scanf("%d",&n)==1)
   {
     out = fib(n);
     cout<<"The Fibonacci number for "<<n<<" is "<<out<<endl;
   }

}
