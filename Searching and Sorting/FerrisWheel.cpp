#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n>>x;

    vector<int> weight(n);
    for(int i =0; i<n; i++) cin>>weight[i];

    sort(weight.begin(), weight.end());

    int i = 0, j = n-1;
    int ans = 0;

    while(i<j)
    {
        int sum = weight[i] + weight[j];
        if(sum <= x) i++
        j--;
        ans++;
    }

    if(i==j) ans++;

    cout<<ans;
    return 0;
}