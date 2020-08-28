#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the powersGame function below.
 */

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int q,x;
    cin>>q;
    for(int z=0;z<q;z++){
        cin>>x;
        if(x%8) cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}