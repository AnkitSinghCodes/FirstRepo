#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum=sum+v[i];
    }
    cout<<sum;
    return 0;
}