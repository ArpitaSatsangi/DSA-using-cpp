#include <bits/stdc++.h> 

void solve(stack<int> &stack, int num)
{
	if(stack.empty() || (!stack.empty() && stack.top() < num))
	{
		stack.push(num);
		return;
	}

	int ele = stack.top();
	stack.pop();

	solve(stack, num);
	stack.push(ele);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty())
	{
		return;
	}
	
	// Write your code here
	int num = stack.top();
	stack.pop();

	sortStack(stack);

	solve(stack, num);
}
