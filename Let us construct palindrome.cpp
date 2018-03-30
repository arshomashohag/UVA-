#include<cstring>
#include<cstdio>
#define lld long long int

using namespace std;

char ar[100005],temp[100008],ch;
lld len,i,j;
int t,out,flag;

void strrever(lld l)
{
    lld a=0;
    while(l>=0)
        temp[a++]=ar[l--];
    temp[a]='\0';

}

int main(void)
{
 scanf("%d",&t);
 getchar();

 while(t--)
 {
  scanf("%s",ar);
  len=strlen(ar)-1;
  strrever(len);

  if(strcmp(ar,temp)==0)
  {
      printf("YES\n");
  }

  else
  {
      flag=0;

      j=len;
      len=len/2;
      for(i=0;i<=len && flag<=1;i++)
      {
        if(ar[i]!=ar[j-i])
        {
            if(ar[i]==ar[j-i-1])
                {
                flag++;
                j--;
                len--;
                }
            else if(ar[j-i]==ar[i+1])
                {
                flag++;
                 i++;
                len--;
                }
        }
      }
      if(flag==1)
        printf("YES\n");
      else
        printf("NO\n");
    }
    getchar();
 }
 return 0;
}
