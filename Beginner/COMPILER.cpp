#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		char expr[1000005];
		cin>>expr;
		int len = strlen(expr);
		stack <char> s;
		
		int i,res=0;
		for(i=0;i<len;i++){
			if(expr[i]=='<'){
				s.push(expr[i]);
			}	
			else{
				if(s.empty()){
					break;
				}
				s.pop();
			}
			if(s.empty()){
				res = i+1;
			}
		}
		cout<<res<<'\n';
	}
	return 0;
}

