class Solution {

public:
    int countPrimes(int n) {
        
        
    if(n<=1)
    {
        return false;
    }
    
    int c=0;
    vector <bool> prime (n+1,true);
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        c++;

        for(int j=2*i;j<n;j+=i)
        {
            prime[j]=false;
        }
    }


    return c;          
    }
};
