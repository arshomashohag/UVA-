#include<bits/stdc++.h>

#define lld long long int 

using namespace std;
string in; 
char ch1, ch2;
lld i, j, k;
bool flag;

int main(void)
{
    
    while(getline(cin, in) && in!="DONE")
    {
        i    = 0;
        k    = in.length()-1;
        flag = true;
        
        while(i<k)
        {
          while(i<k && !isalpha(in[i]))
          {
              i++;
          } 
         
          while(i<k && !isalpha(in[k]))
          {
              k--;
          } 
           if(i<k)
           {
           ch1 = tolower(in[i]);
           ch2 = tolower(in[k]);
           i++;
           k--;
           
            if(ch1!=ch2)
             {
             flag = false;
             break;
             }
         
            }
          
        }

     if(flag)
        printf("You won't be eaten!\n");
    else
       printf("Uh oh..\n"); 
    }
    
    return 0;
}