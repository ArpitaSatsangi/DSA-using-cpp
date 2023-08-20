#include<stack> 
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1); 
    vector<int> ans(n);

    for(int i=n-1; i>=0;i--)
    {
        int ele = arr[i];
        while(s.top()>=ele)
        {
            s.pop();
        }

        ans[i]=s.top();
        s.push(ele);
    }

    return ans;
}
