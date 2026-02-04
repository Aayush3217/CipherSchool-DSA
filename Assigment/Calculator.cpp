#include <iostream>
using namespace std;

void calculator(int num1, int num2, char op){
    switch(op){
        case '+':
            cout<<"Result: "<<num1 + num2;
            break;
        case '-':
            cout<<"Result: "<<num1 - num2;
            break;
        case '*':
            cout<<"Result: "<<num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                cout<<"Result: "<<num1 / num2;
            }
            else{
                cout << "Error:";

            }
            break;
        default:
            cout << "Invalid operator!";
    }
}

int main(){
    int num1, num2;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    char op;
    cout<<"Enter operator like (+, -, *, /): ";
    cin>>op;
    calculator(num1, num2, op);
}