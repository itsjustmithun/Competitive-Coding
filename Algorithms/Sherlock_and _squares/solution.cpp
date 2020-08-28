#include <bits/stdc++.h>

using namespace std;

int main() {

int t;
cin >> t;


for(int a0 = 0; a0 < t; a0++){
    int a;
    int b;
    int count = 0;
    cin >> a >> b;
    int range;

    for(range = a; range <=b; ++range){


       int temp = sqrt(range);

        if(temp*temp == range)

        {

            count++;
            range += temp*2 ;
        }



    }


    cout<<count<<"\n";
}


return 0;
}