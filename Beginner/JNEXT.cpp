#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		
		int A[n];
		for(ll i=0;i<n;i++){
			cin>>A[i];
		}

		int f = next_permutation(A,A+n);
		if(!f)
			cout<<"-1\n";
		else{
			for(ll i=0;i<n;i++){
				cout<<A[i];
			}
			cout<<'\n';
		}
			
	}
	return 0;
}

