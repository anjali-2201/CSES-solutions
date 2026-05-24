#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin>>n >> m>> k;
    int ans = 0;

    vector<int> v(n), a(m);
    for(int i =0; i<n; i++) cin>>v[i];
    for(int i = 0; i<m; i++) cin>>a[i];

    sort(v.begin(), v.end());
    sort(a.begin(), a.end());

    int i =0, j=0;

    while(i<n && j<m)
    {
        if(abs(v[i] - a[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }

        else if(a[j] < v[i] - k) j++;
        else i++;
    }

    cout<<ans;
    return 0;
    
}