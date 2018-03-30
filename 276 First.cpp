#include<cstdio>
#include<iostream>
#define lld long long int

using namespace std;


lld m,a,out;
int save[100005]={0};
int main(void)
{
   while(cin>>a>>m )
   {
       out=a;
       save[out]=1;
       while(1)
       {
           out=out+a%m;
           a=out;

           if(out>m)
            {
                out=out-m;
                if(save[out]!=0)
                    break;
                else
                    save[out]=1;
            }
         if(out==m)
            break;
      }
       if(out!=m)
        printf("No\n");
       else
        printf("Yes\n");
   }
    return 0;
}
