#include<bits/stdc++.h>
#define lld long long int

using namespace std;
string str[12], in;

int main(void)
{
 lld l, t, i, j, r, n, c, cn=1;

 scanf("%lld",&t);
  getchar();
 while(t--)
 {
      l=0;
      j=0;

    for(i=0; i<10; i++)
    {
      cin>>in>>r;


      if(l<r)
      {
        for(c=0; c<j; c++)
            str[c].clear();

        j=0;
        str[j]=in;
        j++;

        l=r;
      }
      else if(l==r)
      {
          str[j]=in;
          j++;

      }
    }
   printf("Case #%lld:\n", cn++);
   for(i=0; i<j; i++)
    {
        cout<<str[i]<<endl;
        str[i].clear();
    }


 }


 return 0;
}
