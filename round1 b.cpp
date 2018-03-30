#include<cstdio>
#include<cstring>
#include<iostream>
#include<cctype>

using namespace std;

char ar[]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'
,'V','W','X','Y','Z'},arr[40],ch,out[30];

 long long int n,i,j,row,col,nd,temp,rem;
int checkalr,checkalc,checkd;
int main(void)
{
    cin>>n;
    getchar();
    while(n--)
    {
     scanf("%s",arr);
     i=0;
    checkalr=0;
    checkd=0;
    checkalc=0;

     if(arr[i]=='R')
        checkalr=1;
     if(isdigit(arr[i+1]))
        checkd=1;
     while(arr[i] && checkalr==1)
     {
         if(arr[i]=='C')
            checkalc=1;
         i++;
     }
     if(checkalc==1 && checkd==1)
     {
       i=1;
       row=0;
       col=0;
       while(isdigit(arr[i]))
       {
         row=10*row+(arr[i]-48);
         i++;
       }
       i=i+1;
       while(isdigit(arr[i]))
       {
           col=col*10+(arr[i]-48);
           i++;
       }

       temp=col-1;

      while(temp)
      {
         if(temp>26)
            cout<<ar[temp/26];
         else
            cout<<ar[rem+1];

           rem=temp%26;
          temp=temp/26;
      }
      cout<<row<<endl;

     }

     else
     {
       i=0;
       col=0;
       row=0;
       while(isalpha(arr[i]))
       {
        col=col*26+(arr[i]-64);
        i++;
       }
       while(isdigit(arr[i]))
       {
           row=row*10 +(arr[i]-48);
           i++;
       }
       cout<<'R'<<row<<'C'<<col<<endl;
     }
    getchar();
    }
    return 0;
}
