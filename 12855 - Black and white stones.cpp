#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#define lld long long int

using  namespace std;

lld i, j, len, W, out, A, B, ou;
string st;
bool foundW, foundB;
bool flag;


int main(void)
{

 while(scanf("%lld%lld",&A,&B)==2)
 {
     cin>>st;
     len = st.size();

     W=0;
     ou = 0;
     for(i=0;i<len;i++)
     {
         if(st[i]=='B')
            ou = ou+(A-B)*W;
         else
            W++;
     }

     out = 0;
     i=0;
     j=len-1;

     while(i<j)
     {
    foundB = false;
    foundW = false;
     for(;i<j;i++)
     {
      if(st[i]=='W')
            {
               foundW = true;
                break;
            }
     }

     for(;j>i;j--)
     {
         if(st[j]=='B')
            {
                foundB = true;
                break;
            }
     }

    if(foundB && foundW)
    {
     if(j==(i+1))
        out = out+(A-B);
     else
       out = out + A;
     }

     i++;
     j--;

     }

     cout<<min(out,ou)<<endl;
 }


    return 0;
}

