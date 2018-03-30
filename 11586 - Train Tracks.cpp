#include<cstdio>
#include<cstring>

int m,f,i,j,t;
char track[300];

int main(void)
{
   scanf("%d",&t);
   getchar();
   while(t--)
   {
    scanf("%[^\n]",track);
    f=0;
    m=0;
    for(i=0;track[i];i++)
    {
        if(track[i]=='F')
            f++;
        else if(track[i]=='M')
            m++;
    }

    if(f>1 && m>1 && f==m)
        printf("LOOP\n");
    else
        printf("NO LOOP\n");

    getchar();
   }
   return 0;
}
