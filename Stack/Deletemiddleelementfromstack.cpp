#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int>& st){
    stack<int> temp;
    int mid = st.size()/2;
    for(int i=0; i<mid; i++){
        temp.push(st.top());
        st.pop();
    }
    // popping middle ele
    st.pop();
    //push rest again from temp to our main stack
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;
    for(int i=5; i>=1; i--){
        st.push(i);
    }
    deleteMiddle(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}