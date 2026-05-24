#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<int> arr;
    arr.push_back(x);

    for(int i = 1; i<n; i++)
    {
        arr.push_back((a*arr[i-1] + b) % c);
    }

    cout<<endl;

    int i = 0, j = 0;
    long long sum = 0;

    long long ans = 0;
    while(i<(n-k+1))
    {
        if(j-i+1 <k)
        {
            sum+=arr[j];
            j++;
        }
        else
        {
            sum+=arr[j];
            ans = ans^sum;
            sum-=arr[i];
            i++;
            j++;
        }
        
    }

    cout <<ans;
    return 0;
}