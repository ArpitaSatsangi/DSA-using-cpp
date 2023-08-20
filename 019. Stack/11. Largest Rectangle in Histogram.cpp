class Solution {
private:
    vector<int> nextSmallerEle(vector<int>& arr, int n)
    {
        stack<int> s;
        s.push(-1); 
        vector<int> ans(n);
        for(int i=n-1; i>=0;i--)
        {
            int ele = arr[i];
            while(s.top()!=-1 && arr[s.top()]>=ele)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerEle(vector<int>& arr, int n)
    {
        stack<int> s;
        s.push(-1); 
        vector<int> ans(n);
        for(int i=0; i<n;i++)
        {
            int ele = arr[i];
            while(s.top()!=-1 && arr[s.top()]>=ele)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }


public:
    int largestRectangleArea(vector<int>& heights) {

        int area=INT_MIN;
        int n=heights.size();
        vector<int> prev(n);
        prev = prevSmallerEle(heights,n);
        vector<int> next(n);
        next = nextSmallerEle(heights,n);

        for(int i=0;i<n;i++)
        {            
            int l = heights[i];

            if(next[i]==-1)//if all elements are same
            {
                next[i]=n;
            }
            int b = next[i] - prev[i] - 1;

            int ans = l*b;
            area = max(ans, area);
        }
        
        return area;
    }
};
