#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin>>a;
        tickets.insert(a);
    }

    for(int i = 0; i<m; i++)
    {
        int customer;
        cin>>customer;

        auto it = tickets.upper_bound(customer);

        if(it == tickets.begin())
        {
            cout<< -1 << endl;
        }
        else{
            it--;
            cout<< *it << endl;
            tickets.erase(it);
        }
       
    }

    return 0; 
}