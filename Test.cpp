#include<cstdio>
#include<cstring>

using namespace std;

long long int l,t,i,j,n,k,cn,out,res;
char s[100004],temp[100004],ch;

class stack{
long long arr[100004];
long long tos;

public:
    stack()
    {
        tos=-1;
    }
  void push(long long int a)
  {
    arr[++tos]=a;
  }
  long long int pop(void)
  {
      if(tos>=0)
      return arr[tos--];
      else
        return -1;
  }
};

int main(void)
{
    class stack ob;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("\n");
        strcpy(s,"\0");
        while(1)
        {
            scanf("%[^\n]",temp);
            strcat(s,temp);
            if(strlen(s)>=n)
                break;
            scanf("\n");
        }
        printf("%s\n",s);
        res=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='4')
            {
              ob.push(i+1);
            }
            else if(s[i]='7')
            {
              j=ob.pop();
              if(j!=-1)
                res=res+j;
            }
      }
   printf("%lld\n",res);
    }
    return 0;
}
