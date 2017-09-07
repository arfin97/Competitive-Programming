#include <bits/stdc++.h>
using namespace std;

int ara[3000000];

int main(){
    int tc;
    scanf("%d", &tc);
    for(int tr = 1; tr <= tc; tr++){
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%d", &ara[i]);
        sort(ara, ara+n);
        int first_print = 0;
        for(int i = 0; i < n; i++){
            if(first_print == 0) printf("%d", ara[i]);
            else printf(" %d", ara[i]);
            first_print = 1;
        }
        printf("\n");

    }
    return 0;
}
