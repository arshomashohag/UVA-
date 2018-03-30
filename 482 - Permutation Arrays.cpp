#include<bits/stdc++.h>

#define lld long long int 

using namespace std;
lld t, n, i, j, inp, s;
float inf;

vector<lld> ar1;
string ar2[1000005];

 string in; 

int main(void)
{
    istringstream is;
    
   scanf("%lld",&t);
   getchar();
   getchar();
   while(t--)
   {
        
       getline(cin,in);
       
      is.str(in);
      s = 0;
      while(is>>inp && inp>0)
      {
        ar1.push_back(inp);
        s++; 
         
      }  
    
    for(i=0; i<s; i++)
    {
        cin>>in;
        ar2[ar1[i]-1]=in;
    }
    
   for(i=0; i<s; i++)
   {
     cout<<ar2[i]<<endl;  
   }
   
   if(t>0)
       printf("\n");
     
   }
    
    return 0;
}