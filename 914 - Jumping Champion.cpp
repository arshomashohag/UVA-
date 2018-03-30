#include<bits/stdc++.h>

#define lld long long int 

using namespace std;

vector<lld> prime;
vector<lld> dif;

void seive(void)
{
    bitset<500003> bt;
    bt.set();
    
    lld i, j, last, lim=sqrt(1000002);
    
     prime.push_back(2);
     last = 2;
     
     for(i=3; i<=lim; i+=2)
     {
         if(bt[i>>1])
         {
             prime.push_back(i);
             
             dif.push_back(i-last);
             last = i;
             
             for(j=i*i; j<=1000000; j+=i+i)
                 bt[j>>1]=0;
         }
     
     }
     
    while(i<1000000)
    {
        if(bt[i>>1])
        {
        prime.push_back(i);
         dif.push_back(i-last);
         last = i;
         }
        i+=2;
    
    }
}

int main(void)
{
    
    seive();
    
    lld t, ub, lb, i, j, out, itl, itu, outn;
    map<lld, lld> mymap;
    map<lld, lld>::iterator it;
    bool flag, les;
    
    scanf("%lld",&t);
    
    while(t--)
    {
        scanf("%lld%lld",&lb, &ub);
         
        itl = lower_bound(prime.begin(), prime.end(), lb) - prime.begin();
        itu = upper_bound(prime.begin(), prime.end(), ub) - prime.begin() - 1;
        
        if(itl==itu)
         les = true;
        else 
        les  = false;
        
        itu--;
                             
        out  = 0;
        outn = 0;
        flag = true;
                        
        while(itl<=itu)
        {
         i  = dif[itl];
         it = mymap.find(i);
          if(it!=mymap.end() )
           {
               j = ++ mymap[i];
               if(out<j)
               {
                   out  = j;
                   outn = i;
                   flag = true;
               }
               else if(out==j)
                   flag = false;
            }
         else
         {
             j = mymap[i] = 1;
             
             if(out<j)
               {
                   out  = j;
                   outn = 1; 
                   flag = true;
               }
               else if(out==j)
                   flag = false;
             
         }
           
        
           itl++;
        } 
       
        mymap.clear();
        
        if(flag && !les && outn)
       printf("The jumping champion is %lld\n",outn);
   else
     printf("No jumping champion\n");  
    }
    
    return 0;
}