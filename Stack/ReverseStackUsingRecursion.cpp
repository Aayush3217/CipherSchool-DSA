// Link : https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?leftPanelTabValue=PROBLEM

// brute force
void reverseStack(stack<int> &st) {

    stack<int> temp;

    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    st = temp;
}
