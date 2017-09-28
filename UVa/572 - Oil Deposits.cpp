#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define MAX 10000

int n, m;
vector<string> field;
int visited[100][100];

int di[] = {-1, -1, -1, 0, 0, +1, +1, +1};
int dj[] = {-1, 0, +1, -1, +1, -1, 0, +1};

void dfs(int a, int b){
    int I, J;
    visited[a][b] = 1;

    for(int i = 0; i < 8; i++){
        I = a + di[i];
        J = b + dj[i];
        if(I >= 0 && I < n && J >= 0 && J < m){
            if(visited[I][J] == 0){
                visited[I][J] = 1;
                if(field[I][J] == '@') dfs(I, J);
            }
        }
    }
}

int main(){
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        field.clear();
        memset(visited, 0, sizeof(visited));

        //input
        string input;
        for(int i = 0; i < n; i++){
            cin >> input;
            field.push_back(input);
        }

        //calculation
        int pocket = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(visited[i][j] == 0){
                    visited[i][j] = 1;
                    if(field[i][j] == '@'){
                        dfs(i, j);
                        pocket++;
                    }
                }
            }
        }
        cout << pocket << endl;
    }
    return 0;
}
