#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[9];
    int k=4;
    for(int i=0;i<9;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    int mx=sum;
    int curr=0;
    for(int i=k;i<9;i++)
    {
        sum+=a[i]-a[curr];
        curr++;
        mx=max(mx,sum);
    }
    cout<<mx;




}
