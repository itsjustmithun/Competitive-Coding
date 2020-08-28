#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--)
        {
        int n,k,count=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
            {
            int x;
            cin>>x;
            if(x<=0)
                count++;
        }
        if(count>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}