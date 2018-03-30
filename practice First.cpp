#include<cstido>
#include<cstring>

int digit,number;
char ar1[2000],ar2[2000],temp[2000];
int i,j,b,r,car,v,d,t,a,x;


int main(void)
{

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&number,&digit);
        a=number;
        x=0;
        while(a)
        {
            ar1[x++]=a%10;
            a=a/10;
        }
        ar1[x]='\0';
        strrev(ar1);

        for(i=2;i<n;i++)
        {
        a=i;
        x=0;
        while(a)
        {
            ar2[x++]=a%10;
            a=a/10;
        }
        ar2[x]='\0';
        strrev(ar2);

        for()
        }
    }
}
