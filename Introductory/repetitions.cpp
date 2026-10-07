#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int maxlen = 1, currlen = 1;

    for(int i = 1; i<s.size(); i++)
    {
        if(s[i] != s[i-1]) currlen = 0;
        currlen++;
        maxlen = max(maxlen, currlen);
    }
    cout<<maxlen;

    return 0;
}