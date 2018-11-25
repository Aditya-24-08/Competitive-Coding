#include<bits/stdc++.h>
#define ll long long

using namespace std;

int getMass(char c){
	if(c=='C')
		return 12;
	else if(c=='H')
		return 1;
	else
		return 16;
}

int getMassbyFormula(char formula[], int begin, int end){
	int mass = 0;
	for(int i=begin;i<end;i++){
		if(isalpha(formula[i])){
			if(i!=end-1){
				if(isdigit(formula[i+1])){
					mass+=getMass(formula[i])*(int(formula[i+1]-'0'));
				}
				else{
					mass+=getMass(formula[i]);
				}
			}
			else{
				mass+=getMass(formula[i]);
			}
		}
		else if(formula[i]=='('){
			int b = i+1;
			int e;
			int surplus = 1;
			while(surplus!=0){
				i++;
				if(formula[i]=='(')
					surplus++;
				else if(formula[i]==')')
					surplus--;
			}
			e = i;
			if((i+1)!=end&&isdigit(formula[i+1])){
				mass+=getMassbyFormula(formula,b,e)*(int(formula[i+1]-'0'));
			}
			else{
				mass+=getMassbyFormula(formula,b,e);	
			}
		}
	}
	return mass;
}


int main(){
	char formula[101];
	cin>>formula;
	int mass = getMassbyFormula(formula,0,strlen(formula));
	cout<<mass;
	return 0;
}

