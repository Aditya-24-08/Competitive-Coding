#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T,X,Y,K,N;
	cin>>T;
	while(T--){
		cin>>X>>Y>>K>>N;
		int Pi, Ci;
		int R = X - Y;
		int flag = 0;
		
		for(int i=0; i<N;i++){
			cin>>Pi>>Ci;
			if(K>=Ci && R<=Pi){
				flag = 1;
			}		
		}
		if(flag){
			cout<<"LuckyChef\n";
		}
		else{
			cout<<"UnluckyChef\n";
		}
	}
	return 0;
}

