#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int comp(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}

int ar[1020],n,x,req,i,j;
int main(void)
{
	while(scanf("%d%d",&n,&x)==2)
	{
		for(i=0;i<n;i++)
		scanf("%d",&ar[i]);

		qsort(ar,n,sizeof(int),comp());

		j=0;
		(n%2)?n=n/2:n=1+(n/2);
		while(j<n)

	}

}
