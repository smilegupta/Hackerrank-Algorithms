#include<bits/stdc++.h>
using namespace std;
int count_frequency(vector<int> ar){
    int n=ar.size();
    int f[5];
    for(int i=1;i<=5;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(ar[j]==i)
            {
                c++;
            }
            f[i-1]=c;
        }
    }
    int max=f[0],loc=0;
    for(int k=1;k<5;k++)
    {
        if(f[k]>max)
        {
            max=f[k];
            loc=k;
        }
        
    }
    return (loc+1);
}


int main(){
    int tc,x;
    cin>>tc;
    vector<int> smile;
    for(int i=0; i<tc; i++)
    {
        cin>>x;
        smile.push_back(x);
    }
    cout<<count_frequency(smile);
    return 0;
}
