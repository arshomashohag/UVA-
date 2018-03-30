#include<stdio.h>
#include<stdlib.h>

unsigned long long int x[10100],y[10100];

void quicksort(unsigned long long int[10],int,int);

int main(){
  int size,i=0,j=0,median=0,n,n1;

    while(scanf("%llu",&x[i]))
	{
    j++;
        quicksort(x,0,i);

  if(j%2==0)
  {
    n=x[i/2];
    n1=x[i/2+1];
    median=(n1+n)/2;
     y[i]=median;
  }
  else{
    median=x[i/2];
     y[i]=median;
     }
     
     i++;
     if(i>=10000)
     break;
}
for(j=0;j<i;j++)
printf("%llu\n",y[j]);

  return 0;
}


void quicksort(unsigned long long int x[10],int first,int last)
  {
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++
                 ;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }

         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;

         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
