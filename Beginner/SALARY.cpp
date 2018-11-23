#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T,N;
	cin>>T;
	while(T--){
		cin>>N;
		int W[N];
		ll S = 0,minVal=100000;
		for(int i=0;i<N;i++){
			cin>>W[i];
			S+=W[i];
			if(minVal>W[i])
				minVal = W[i];
		}
		ll res = S - minVal*N;
		cout<<res<<"\n";
	}
	return 0;
}

