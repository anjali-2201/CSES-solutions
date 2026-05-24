#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> tickets(n,{0,0});
    vector<int> people(m,0);

    for(int i = 0; i<n; i++)
    {
        cin >> tickets[i].first;
    }

    for(int i = 0; i<m; i++)
    {
        cin >> people[i];
    }

    
    for(int i = 0; i<m; i++)
    {
        int maxprice = -1;
        for(int j = 0; j<n; j++)
        {
            if(tickets[i].first <= people[i] && tickets[i].second != 1)
            {
                if(tickets[i].first > maxprice)
                {
                    maxprice = tickets[i].first;
                    tickets[i].second = 1;
                }  
            }
        }

        cout<<maxprice;   
    }

    return 0;


}