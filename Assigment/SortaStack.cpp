// Link : https://www.naukri.com/code360/problems/sort-a-stack_985275

#include <bits/stdc++.h>

void insertSorted(stack<int>& st, int x){
	if(st.empty() || st.top()<=x){
		st.push(x);
		return;
	}
	int temp = st.top();
	st.pop();
	insertSorted(st, x);
	st.push(temp);
}

void sortStack(stack<int> &stack)
{
	if(st.empty()) return;
	int x = st.top();
	st.pop();
	sortStack(st);
	insertSorted(st, x);
}