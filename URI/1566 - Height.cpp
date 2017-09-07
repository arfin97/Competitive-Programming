#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int ara[3000000];

int main(){
	string str;
    while(getline(cin, str)){
	    if(str == "0") break;
	    stringstream ss(str);
	    int x = 0;
	    int num;
	    while(ss >> num){
	    	ara[x] = num;
	    	x++;
	    }

	    int cnt = 0;
	    for(int i = 0; i < x; i++){
	        for(int j = 0; j < x; j++){
	            if(ara[i] >= ara[j]){
	                swap(ara[i], ara[j]);
	                cnt++;
	            }
	        }
	    }

	    if(cnt%2 == 0){
	    	printf("Marcelo\n");
	    }else{
	    	printf("Carlos\n");
	    }
    }
    return 0;
}
