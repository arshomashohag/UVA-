#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstdlib>
#include<list>
#include<cctype>
#define lld long long int

using namespace std;

char ar[500];
bool flag;
int n, i,j;

bool comp(const char a, const char b)
{
    return a<b;
}


int main(void)
{
  set< string > myset;
  set< string >::iterator it1,it2;
  string str;

  scanf("%d",&n);

  while(n--)
  {
      getchar();
      scanf("%s",ar);
      i = strlen(ar);
      sort(ar,ar+i,comp);

     do
     {
         str = ar;
       myset.insert(str);

     }while(next_permutation(ar,ar+i));

     it1 = myset.begin();
      it2 = myset.end();

      while(it1!=it2)
      {
        cout<<*(it1)<<endl;
        it1++;
      }
    myset.clear();
  }

    return 0;
}




