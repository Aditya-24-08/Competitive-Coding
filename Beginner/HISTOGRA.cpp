#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	while(1){
		ll n;
		cin>>n;
		if(n==0){
			break;
		}
		ll H[n+1];
		ll i;
		for(i=0;i<n;i++){
			cin>>H[i];
		}
		H[i] = 0; 
		stack <pair<ll,ll> > S;
		S.push(make_pair(0,-1));
		
		ll AMax = 0, VAL, HIGH, LOW;
		
		for(ll i=0;i<n+1;i++){
			ll x = H[i];
			while(!S.empty() && (x<S.top().first)){
				VAL = S.top().first;
				HIGH = i-1;
				S.pop();
				LOW = S.top().second+1;
				AMax = max(AMax, VAL*(HIGH-LOW+1));
			}
			S.push(make_pair(x, i));
		}
		cout<<AMax<<'\n';
	}
	return 0;
}

