#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
ll dp[40009];
bool ispalindrome(ll n)
{
    string s=to_string(n);
    string s2=s;
    reverse(s.begin(),s.end());
    if(s==s2)
        return true;
    else
        return false;
}
int main() {
	
	vector<ll>v;
	ll i,j;
	for(i=1;i<=40000;i++)
	{
	    if(ispalindrome(i))
	    {
	        v.push_back(i);
	    }
	}
	dp[0]=1;
	for(i=0;i<v.size();i++)
	{
	    for(j=v[i];j<=40000;j++)
	    {
	        dp[j]=(dp[j]+dp[j-v[i]])%mod;
	    }
	}
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    cout<<dp[n]<<endl;
	}
	return 0;

}