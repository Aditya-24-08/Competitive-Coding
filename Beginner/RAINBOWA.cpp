#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T,N;
	cin>>T;
	while(T--){
		cin>>N;
		int A[N], res = 1;
		int count[7];
		memset(count,0,sizeof(count));
		
		for(int i=0;i<N;i++){
			cin>>A[i];
		}
		int num=1;
		for(int i=0,j=N-1;i<=j;i++,j--){
			if(A[i]==num&&A[j]==num){
				count[num-1]++;
			}
			else if(A[i]==(num+1) && A[j]==(num+1)){
				if(count[num-1]==0){
					res = 0;
					break;
				}
				num++;
				if(num>7){
					res = 0;
					break;
				}
				count[num-1]++;
			}
			else{
				res = 0;
				break;
			}
		}
		for(int i=0;i<7;i++){
			if(count[i]==0){
				res = 0;
				break;
			}
		}
		if(res)
			cout<<"yes\n";
		else
			cout<<"no\n";
		
	}
	return 0;
}

