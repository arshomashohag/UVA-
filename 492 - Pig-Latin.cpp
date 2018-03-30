#include<bits/stdc++.h>

#define lld long long int 

using namespace std;

int main(void)
{
    string in;
    char ch;
    lld i, j, l;
    
    while(getline(cin, in))
    {
        
        l = in.length();
        i = 0;
        while(i<l)
        {
              while(i<l && !isalpha(ch=in[i]) )
              {
                  printf("%c",ch);
                  i++;
              }
            
              if(i<l && ( ( ch=tolower(ch) )=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ) ) 
          {
              
               while(i<l && isalpha(ch=in[i]) )
               {
                   printf("%c",ch);
                   i++;
               }
               printf("ay");
          
          }
       
         else if(i<l)
              {
                 j = i;
                 i += 1; 
                while(i<l && isalpha(ch=in[i]) )
               {
                   printf("%c",ch);
                   i++;
               }
                printf("%c",in[j]);
                printf("ay");
             
              }
          
        }
    
        printf("\n");
    }
    
    
    return 0;
}