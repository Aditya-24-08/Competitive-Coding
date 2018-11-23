#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T,N,K;
	cin>>T;
	while(T--){
		cin>>N>>K;
		
		vector<string> strN;
		set<string> strK;
		
		string temp;
		for(int i=0;i<N;i++){
			cin>>temp;
			strN.push_back(temp);
		}
		for(int i=0,L;i<K;i++){
			cin>>L;
			for(int j=0;j<L;j++){
				cin>>temp;
				strK.insert(temp);
			}
		}
		for(int i=0;i<N;i++){
			const bool is_in = strK.find(strN[i]) != strK.end();
			if(is_in)
				cout<<"YES ";
			else
				cout<<"NO ";
		}
		
		cout<<"\n";
	}
	return 0;
}

