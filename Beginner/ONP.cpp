#include<bits/stdc++.h>
#define ll long long

using namespace std;


int getPrecedence(char op){
	switch(op){
		case '+':	return 0;
		case '-':	return 1;
		case '*':	return 2;
		case '/':	return 3;
		case '^':	return 4;
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		char expr[500];
		cin>>expr;
		
		stack <char> s;
		
		int len = strlen(expr);
		for(int i=0;i<len;i++){
			if(expr[i]=='('){
				s.push(expr[i]);
			}
			else if(expr[i]>='a'&&expr[i]<='z'){
				cout<<expr[i];
			}
			else if(expr[i]==')'){
				while(s.top()!='('){
					cout<<s.top();
					s.pop();
				}
				s.pop();
			}
			else{
				while(s.top()=='+'||s.top()=='-'||s.top()=='*'||s.top()=='/'||s.top()=='^'){
					int topPrec = getPrecedence(s.top());
					if(topPrec<getPrecedence(expr[i])){
						break;
					}
					else{
						cout<<s.top();
						s.pop();
					}
				}
				s.push(expr[i]);
			}
		}
		while(!s.empty()){
			cout<<s.top();
			s.pop();
		}
		cout<<'\n';
	}
	return 0;
}

