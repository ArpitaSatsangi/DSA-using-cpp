queue<int> rev(queue<int> Q)
{
    stack<int>s;
    
    while(!Q.empty())
    {
        int ele = Q.front();
        Q.pop();
        s.push(ele);
    }
    
    while(!s.empty())
    {
        int ele = s.top();
        s.pop();
        Q.push(ele);
        
    }
    
    return Q;
}
