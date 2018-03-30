#include<bits/stdc++.h>

using namespace std;
string t;
char arr[100];
int n, i, j, l, k;


int main(void)
{

 scanf("%d", &n);
 getchar();


 for(i=0; i<n; i++){

    scanf("%s", arr);
    l = strlen(arr);
    sort(arr, arr+l);

   do{
    printf("\n");
     printf("%s", arr);
    } while(next_permutation(arr, arr+l));



 }



    return 0;
}
