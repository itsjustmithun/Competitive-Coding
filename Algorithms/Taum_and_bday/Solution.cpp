#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long b,w,bc,wc,z;
        cin>>b>>w>>bc>>wc>>z;
        if(bc+z<wc)
        cout<<b*bc + (bc+z)*w<<endl;
        else if(z+wc<bc)
        cout<<w*wc + (wc+z)*b<<endl;
        else
        cout<<b*bc + w*wc<<endl;
    }
}
