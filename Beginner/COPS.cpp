#include<bits/stdc++.h>
#define ll long long

using namespace std;

void applyFunc(int houses[], int copHouse, int xy){
	int startIndex, endIndex;
	copHouse--;
	startIndex = max(0,copHouse-xy);
	endIndex = min(99,copHouse+xy);
	
	for(int k=startIndex;k<=endIndex;k++){
		houses[k] = 0;
	}
}
void prnt(int houses[]){
	for(int i=0;i<100;i++)
		cout<<houses[i]<<" ";
	cout<<'\n';
}
int main(){
	int T,M,x,y;
	cin>>T;
	while(T--){
		cin>>M>>x>>y;
		int xy = x*y;
		int copHouses[M];
		for(int j=0;j<M;j++){
			cin>>copHouses[j];
		}
		int houses[100];
		for(int h=0;h<100;h++){
			houses[h] = 1;
		}
		
		for(int j=0;j<M;j++){
			applyFunc(houses,copHouses[j],xy);
		}
		int res = 0;
		for(int j=0;j<100;j++){
			res+=houses[j];
		}
		cout<<res<<'\n';
	}
	return 0;
}

