#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#define lld long long int


using namespace std;

lld i,j,k,cn=1,q,mi,mai,l;
char car[1000004],*ar,*loc,ch;
int main(void)
{
     while(gets(car))
     {
         if(strlen(car)==0)
            break;
         cin>>q;
         cout<<"Case "<< (cn++) <<":"<<endl;
         while(q--)
         {
           cin>>i>>j;
           mi=min(i,j);
           mai=max(i,j);
            ar=(char *) malloc(mai-mi+2);
           ar=&car[mi];
           ch=car[mi];
           if(ch=='0')
           {
            loc=strchr(ar,'1');

            if(loc==NULL)
                printf("Yes\n");

            else
            {
                l=loc-ar;

              if(l<=(mai-mi))
               printf("No\n");
               else
                    printf("Yes\n");
            }

           }
           else
           {
             loc=strchr(ar,'0');

            if(loc==NULL)
                printf("Yes\n");

            else
               {
               l=loc-ar;

              if(l<=(mai-mi))
               printf("No\n");
               else
                    printf("Yes\n");
               }

           }
         }

         getchar();
     }

     return 0;
}
