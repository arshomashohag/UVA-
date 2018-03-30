#include<cstdio>
#include<cstring>


char s[100000],t[100000];
long long int i,j,cnt;

int main(void)
{
  while(scanf("%s %s",s,t)==2)
  {

      j=0;
      cnt=0;
      for(i=0;s[i];i++)
      {
          for(;t[j];j++)
             {
                 if(s[i]==t[j])
                  {
                      cnt++;
                      break;
                  }
             }
         if(j==strlen(t))
            break;

      }
      if(cnt==strlen(s))
        printf("Yes\n");
      else
        printf("No\n");
  }
  return 0;
}
