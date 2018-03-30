#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(void)
{
int i, j, cn, a, l;
string ins, out;
int chk[28];

while(cin>>ins && ins[0]!='#')
{
  memset(chk, 0, sizeof(chk));
   out.clear();

  l=ins.size();

  for(i=0; i<l; i++)
  {
    chk[ins[i]-'a']++;
  }
  cn=0;
  for(i=0; i<26; i++)
  {
      a = chk[i];
      if(a && a%2)
      {
        out.push_back(i+'a');
        cn++;
      }
  }

 if(cn)
 {
     cn--;
  out.erase(cn);
 }


  cout<<out<<endl;

}
    return 0;
}
