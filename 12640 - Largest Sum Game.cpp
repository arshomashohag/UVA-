#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#define lld long long int

using namespace std;


int main(void)
{
lld n, i, j, ou, ar[100005];
string input;

while(getline(cin,input))
{
  istringstream ss(input);
  i=0;
  while(ss>>ou)
  {
    if(i>0)
        ar[i] = ar[i-1]+ou;
    else
        ar[i]=ou;

    i++;
  }

 for(j=0; j<i; j++)
 {

 }

}

    return 0;
}
