// postfix evaluation
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int do_operation(int op2, int op1, char opr);
bool is_operator(char C);
bool is_operand(char C);

int evaluatePostfix(string exp) {
    stack<int> S;
    for(int i=0; i<exp.length(); i++) {
        if(exp[i] == ' ' || exp[i] ==',') {
            continue;
        }
        else if(is_operand(exp[i])) {
            int operand = 0;
            while(is_operand(exp[i])) {
                operand = operand*10 + exp[i] - '0' ;
                i++;
            }
            i--;
            S.push(operand);
        }

        else if(is_operator(exp[i])) {
            int op2 = S.top(); 
            S.pop();
            int op1 = S.top();
            S.pop();
            int result = do_operation(op2, op1, exp[i]);
            S.push(result);
        }
    }
    return S.top();
}

int do_operation(int op2, int op1, char opr) {
    if(opr == '/') return op1/op2;
    else if(opr == '*') return op1*op2;
    else if(opr == '+') return op1+op2;
    else if(opr == '-') return op1-op2;
    else {
        return -1;
    }
}

bool is_operator(char C) {
    if(C == '/' or '*' or '+' or '-') {
        return true;
    }
    else 
        return false;
}

bool is_operand(char C) {
    if(C>='0' && C<='9') {
        return true;
    }
    else 
        return false;
}

int main() {
    cout << evaluatePostfix("24 4 *"); // The input should be in postfix form
}
