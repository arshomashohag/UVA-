#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
int let[30],i,j,n,out,cn=1,flag;
char word[31];

int main(void)
{
    while(scanf("%d",&n)==1)
    {
        getchar();
        out=0;
        while(n--)
        {
          scanf("%s",word);
          memset(let,0,sizeof(let));
          for(i=0;word[i];i++)
              let[word[i]-97]++ ;
          sort(let,let+30);
          flag=1;
          if(let[28]==0)
             {
                 flag=0;

             }
          else
            for(i=1;i<30;i++)
           {
            if(let[i]!=0 && let[i]==let[i-1])
            {
              flag=0;
              break;
             }

           }

         out=out+flag;
        }
        printf("Case %d: %d\n",cn++,out);
    }
    return 0;
}
