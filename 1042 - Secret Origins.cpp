#include<cstdio>
#include<cstring>
#include<iostream>
#define lld long long int

using namespace std;
int t,cn=1,i,j,base,non,k,l;
lld n,out,temp;
int na[30],temn[30];
int flag;

int main(void)
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=n;
        i=0;
        flag=0;
        non=0;
        while(temp)
        {
            na[i]=temp&1;
            if(na[i]==1)
            {
                non++;
            }
            i++;
            temp=temp>>1;
        }
        i--;
        if(non==1)
        {
            out=n*2;
        }
        else
        {
            non=0;
            for(j=0; j<i; j++)
            {
                if(na[j]==1 && na[j+1]==0)
                {
                    na[j]=0;
                    na[j+1]=1;
                    flag=1;
                    non=j;
                    break;
                }
            }
            if(!flag)
            {
                na[j]=0;
                na[++j]=1;
                i=j;
            }
            else
            {
                l=0;
                for(k=0; k<j; k++)
                {
                    if(na[k]==1)
                    {
                        temp=na[l];
                        na[l]=na[k];
                        na[k]=temp;
                        l++;
                    }

                }
            }
            out=0;
            base=1;
            for(j=0; j<=i; j++)
            {
                out=out+na[j]*base;
                base=base*2;
            }
        }
        printf("Case %d: %d\n",cn++,out);
    }
    return 0;
}
