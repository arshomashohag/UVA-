#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

long long int in, a;

int main(void)
{
 vector<int> left, right;
    char ins[20];

   while( scanf("%d",&in) && in)
   {
        getchar();
        scanf("%[^\n]",ins);
        printf("%s\n",ins);
       if( strcmp(ins,"too low")==0 )
        left.push_back(in);
       else
        right.push_back(in);

       if( strcmp(ins,"right on")==0 )
       {
           sort( left.begin(), left.end() );
           sort( right.begin(), right.end() );

           if(in== right[0] && in>left[0])
           {
               printf("Stan may be honest\n");
           }
           else
            printf("Stan is dishonest\n");

           right.clear();
           left.clear();
       }

   }


    return 0;

}
