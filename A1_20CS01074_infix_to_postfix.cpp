//A1_20CS01074
#include <iostream>
#include<string>
#include<stack>
using namespace std;
int isoperator(char c){
	if(c=='+' ||c=='-' || c=='*'||c=='/'  ){
		
		return 1;
	}
	else return 0;
}
int isoperand(char b){
	if(b>='0' && b<='9' || b>='a' && b<='z' || b>='A' && b<='Z'){
		return 1;
	}
	else return 0;
}
int GetOperatorWeight(char op){
	int weight = -1;
	switch (op){
	case '+':
		weight =1;
	case '-':
		weight =1;
	case '*':
		weight =2;
	case '/':
		weight =2;
	
	}
	
	return weight;
}
int hashighprecedence(char op1,char op2){
	int op1Weight = GetOperatorWeight(op1);
	int op2Weight = GetOperatorWeight(op2);
	if(op2Weight>op1Weight)
		return 1;
	else if(op1Weight==op1Weight){
		
		return 0;
	}
}
string infix_to_postfix(string expression){
	stack<char>s;
	string result;
	for(int i=0;i<(expression.length());i++){
		if (isoperator(expression[i])){
			if(s.empty() || hashighprecedence(s.top(),expression[i])){
				s.push(expression[i]);
			}
			else {
				result+=s.top();
				s.pop();
				s.push(expression[i]);
			}
        }
		else if(expression[i]==' ' || expression[i]==','){
			continue;
		}	
		else if(isoperand(expression[i])){
			result+=expression[i];
		}
        

		
	}
    while(!s.empty()){
        result+=s.top();
        s.pop();
    }
    return result;
	
}
int main(){
	string expression = "2*4+3-7";
	// getline(cin,expression);
	string postfix= infix_to_postfix(expression);
	cout<<"postfix= "<<postfix<<endl;
	
}
