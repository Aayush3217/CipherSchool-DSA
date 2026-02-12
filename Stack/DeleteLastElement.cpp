#include <iostream>
#include <stack>
using namespace std;

void deleteAtBottom(stack<int>& st){
    int topElement = st.top();
    cout<<topElement<<" ";
    st.pop();

    if(st.empty()) return;

    deleteAtBottom(st);
    st.push(topElement);
}

int main(){
    stack<int> st;
    for(int i=5; i>=1; i--){
        st.push(i);
    }
    deleteAtBottom(st);

    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
}