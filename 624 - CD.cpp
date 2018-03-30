#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int N,t,c=1;
int i,j;
char str[22],c1,c2;
float res;


int main(void)
{
 scanf("%d",&t);
 getchar();
 while(t--)
 {
     gets(str);
     sscanf(str,"%d%*s%d%*s",&i,&j);

     N=strlen(str);
     if(N<5)
     j=0;

         cout<<"Case "<<c<<": "<<((float)i*0.5 + (float)j *0.05)<<endl;


      c++;
 }
 return 0;
}
