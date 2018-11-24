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
		ll trucks[n];
		for(ll i=0;i<n;i++){
			cin>>trucks[i];
		}
		stack <ll> sideStreet;
		
		ll neededNumber = 1;
		ll currentNumber;
		
		for(ll i=0;i<n;i++){
			while(!sideStreet.empty() && (sideStreet.top()==neededNumber)){
				neededNumber++;
				sideStreet.pop();
			}	
			currentNumber = trucks[i];
			if(currentNumber==neededNumber){
				neededNumber++;
			}
			else{
				sideStreet.push(currentNumber);
			}		
		}
		while(!sideStreet.empty() && (sideStreet.top()==neededNumber)){
			neededNumber++;
			sideStreet.pop();
		}
		if(neededNumber!=n+1){
			cout<<"no\n";
		}
		else{
			cout<<"yes\n";
		}
	}
	return 0;
}

