#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;

long long int n,i,in, s, temp, l1, l2;

int main(void)
{
    vector<int> ar, ta;

    while(scanf("%lld",&n) && n)
    {
        s = 0;
        for(;n--;)
        {
          scanf("%lld",&in);

          if(in)
          {
              ar.push_back(in);
              s = s+in;
          }
          else
            break;
        }

        l1=ar.size();
        temp=0;

        while(n-- > 0)
        {
          scanf("%lld",&in);

          if(in)
          {
            ta.push_back(in);
            temp = temp +in;
          }
          else
          {
              l2=ta.size();
              if( temp>s || ( (temp==s)  && l2<l1))
              {
                  ar.clear();
                  ar.assign(ta.begin(), ta.end());
                  l1=l2;
                  s = temp;
              }

              ta.clear();
              temp = 0;
          }

        }

        if((l2=ta.size())>0)
        {

              if( temp>s || ( (temp==s)  && l2<l1))
              {
                  ar.clear();
                  ar.assign(ta.begin(), ta.end());
                  l1=l2;
                  s = temp;
              }

              ta.clear();
              temp = 0;
        }



       for(i=0; i<l1; i++)
       {
           printf("%d",ar[i]);
           if(i<(l1-1))
            printf(" ");
       }
       printf("\n");
    }
}
