#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T,N;
	ll C;
	
	cin>>T;
	while(T--){
		cin>>N>>C;
		int A[N];
		ll sum = 0;
		
		for(int i=0;i<N;i++){
			cin>>A[i];
			sum+=A[i];
		}	
		int res = 0;
		if(sum<=C)
			res = 1;
		
		if(res)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	
	return 0;
}

