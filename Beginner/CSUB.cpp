#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll T,N;
	cin>>T;
	while(T--){
		cin>>N;
		char str[N+1];
		cin>>str;
		ll oneCount = 0;
		for(ll i=0;i<N;i++){
			if(str[i]=='1'){
				oneCount++;
			}
		}
		ll res;
		res = oneCount*(oneCount+1);
		res/=2;
		cout<<res<<'\n';
		
	}
	return 0;
}

