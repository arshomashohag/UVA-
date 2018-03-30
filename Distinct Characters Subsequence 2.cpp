#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

char ar[100009];
int t,ck[26],out;
long long int len;


int main(void)
{
    scanf("%d\n",&t);

    while(t--)
    {

        scanf("%s",ar);
        len=strlen(ar);
        sort(ar,ar+len);
        unique(ar,ar+len);
        out=strlen(ar);
        printf("%s %d\n",ar,out);

        getchar();
    }
    return 0;
}
