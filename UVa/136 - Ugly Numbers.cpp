#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> ugly;
    ugly.insert(1);

    set<int>::iterator mini = ugly.begin();

    while(1){
        ugly.insert(((*mini)*2));
        ugly.insert(((*mini)*3));
        ugly.insert(((*mini)*5));
        ++mini;
        if(ugly.size() > 1600) break;
    }
    set<int>::iterator it;
    int printed = 0;
    for(it = ugly.begin(); it != ugly.end(); it++){
        printed++;
//        printf("UGLY: %d:\n", printed);
//        cout << *it << endl;
        if(printed == 1500) break;
    }
    printf("The 1500'th ugly number is %d.\n", *(it)); //859963392. 859963392.
    return 0;
}
