#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,alice=0,bob=0;
    vector<int> a;
    vector<int> b;
    for(int i=0; i<3; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<3; i++)
    {
        cin>>x;
        b.push_back(x);
    }

    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        alice++;

        if(a[i]<b[i])
        bob++;
    }

    cout<<alice<<" "<<bob;


}
