#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#include<iostream>

using namespace std;

bool comp(const string a, const string b)
{
    return a<b;
}

int main(void)
{
string a;
char ch, ar[205];
int i, j, cn=1;
vector< string > dic;
vector< string >::iterator it1, it2;

while(scanf("%[^\n]",ar)>=0 )
{
   getchar();
   j =  strlen(ar);

   for(i=0; i<j; i++)
   {
      while(i<j && isalpha(ar[i]))
      {
          ch = tolower(ar[i]);
          a.push_back(ch);
          i++;
      }
      dic.push_back(a);
      a.clear();
   }
}

 sort(dic.begin(),dic.end(),comp);

   it2 = dic.end();
   a="";
   for(it1=dic.begin(); it1!=it2; it1++)
   {
     if(*(it1)!= a)
     {
        a = *(it1);
        cout<<a<<endl;
     }
   }
 dic.clear();

    return 0;
}
