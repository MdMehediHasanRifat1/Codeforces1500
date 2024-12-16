#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes printf("YES\n")
#define no printf("NO\n")
struct arr 
{
    ll f,s;
};
bool cmp(arr a1,arr a2)
{
    if(a1.f!=a2.f)
        return a1.f<a2.f;
    else 
        return a1.s<a2.s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        arr a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i].f>>a[i].s;
        }
        sort(a,a+n,cmp);
        
    }
    return 0;
}