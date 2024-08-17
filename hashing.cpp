//
// Created by HP on 31-07-2024.
//
#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errors.txt", "w", stderr);
#endif
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    //
    // //precompute
    // int hash[13]={0};
    // for(int i=0;i<n;i++)
    // {
    //     hash[arr[i]]=+1;
    // }
    //
    // int q;
    // cin >>q;
    // while(q--)
    // {
    //     int number;
    //     cin>> number;
    //     //fetch
    //     cout << hash[number] <<endl;
    // }
//MAx Size array declare is 10^6 inside main
    //but globally we can declare upto 1e7 which is 10^7

    // string s;
    // cin >> s;
    //
    // // Pre Compute
    // int hash[26]={0};
    // for(int i=0;i<s.size();i++)
    // {
    //     hash[s[i]-'a']++;
    // }
    // int q;
    // cin >> q;
    // while(q--)
    // {
    //     char c;
    //     cin >>c;
    //     //fetch
    //     cout << hash[c-'a'] << endl;
    // }
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    //precompute
    map<int,int> mpp;
    for(int i= 0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
//iterate in the map
    for(auto it :mpp)
    {
        cout << it.first << "->"<< it.second << endl;
    }

    //fetch
    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        cout<< mpp[number] <<endl;
    }
    return 0;

}
