#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ans = 0;

    int n;
    cin>>n;

    vector<int> v(n);
    cin>>v[0];
    for(int i = 1; i<n; i++)
    {
        cin>>v[i];
        if(v[i] < v[i-1]) 
        {
            ans+=(v[i-1]-v[i]);
            v[i] = v[i-1];
        }
    }

    cout<<ans;
    return 0;
}