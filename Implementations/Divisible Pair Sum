#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int tc;
    cin>>tc;
    int div;
    cin>>div;
    int x;
    int sum, count=0;
    for(int i=0; i<tc; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<tc; i++)
    {
        for(int j=i+1; j<tc; j++ )
        {
            sum=v[i]+v[j];
            if(sum%div==0)
            count++;
        }
    }
    cout<<count;
}
