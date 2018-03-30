#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

  char s[100000000];
   long long int t,num,arr[15],i,j,k,len;

int main()
{

   scanf("%lld",&t);
   while(t--)
   {
      scanf(" %[^\n]",s);
      len=strlen(s);
       i=0;

       if(len%2==0)
       {

           for(i=0,k=len-1;i<k;i++,k--)
             {
           if((s[i]<s[k]) && !i)
               s[k]=s[i];
            else if(s[i]<s[k])
            {
                s[i]=s[i]+1;
                s[k]=s[i];
            }
            else if(s[i]>s[k])
                s[k]=s[i];

       }
       }
       else
       {
         for(i=0,k=len-1;i<k;i++,k--)
             {
           if(s[i]<s[k])
            s[k]=s[i];
            else if(s[i]<s[k])
            {
                s[i]=s[i]+1;
                s[k]=s[i];
            }
            else if(s[i]>s[k])
                s[k]=s[i];


       }
       s[i]=s[i]+1;
       }
       for(k=0;k<len;k++)
        printf("%c",s[k]);
        printf("\n");
   }
   return 0;

}
