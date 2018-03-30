#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;
char set_g[55],out[55];
int len;
bool t;
int main(void)
{
 while(scanf("%s",set_g)==1)
 {
     if(set_g[0]=='#')
        break;
        len=strlen(set_g);
        t=next_permutation(set_g,set_g+len);
     if(t==true)
        printf("%s\n",set_g);
     else
        printf("No Successor\n");
 }
 return 0;
}
