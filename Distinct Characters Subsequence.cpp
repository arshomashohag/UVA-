#include<cstdio>
#include<cstring>

char ar[100009];
int t,out;
long long int i,len;


int main(void)
{
    scanf("%d",&t);
    getchar();
    while(t--)
    {

        scanf("%[^\n]",ar);
         int ck[26]={0};
        len=strlen(ar);
        for(i=0,out=0;ar[i];i++)
        {
            if(ck[ar[i]-97]==0)
            {
                ck[ar[i]-97]=1;

                out++;
            }


        }

         printf("%d\n",out);

        getchar();
    }
    return 0;
}
