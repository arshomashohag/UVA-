#include<cstdio>
#include<cstdlib>

using namespace std;
int prime[1000000]={0};

int main(void)
{
    FILE *fp;
    int i,j,k,l;

    fp=fopen("D://uva_file.txt","w+");
    if(fp==NULL)
    {
        printf("Open error\n");
        exit(1);
    }

    else
    {
     for(i=2;i<1000000;i++)
     {
       if(prime[i]==0)
            fprintf(fp,"%d,",i);
       j=2;
       while((k=i*j) <=1000000)
       {
           prime[k]=1;
           j++;
       }
     }
    }
    return 0;
}
