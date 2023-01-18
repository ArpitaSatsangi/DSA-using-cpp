class Solution {
private:
bool isPrime(int n)
{
    if(n<=1)
    {
        return true;
    }
        

    for(int j=2;j<n;j++)
    {
        if(n%j==0)
        {
            return false;
        }
    }
    return true;
}

public:
    int countPrimes(int n) {
        
        int c=0;

        for(int i=2;i<n;i++)
        {
            if(isPrime(i))
            {
                c++;
            }
        }
        return c;          
    }
};
