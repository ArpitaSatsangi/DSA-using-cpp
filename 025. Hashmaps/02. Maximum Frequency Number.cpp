int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map <int,int> count;
    int maxAns=0;
    int maxFreq = INT_MIN;

    for(int i=0;i<arr.size();i++)
    {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    for(int i=0;i<arr.size();i++)
    {
        if(count[arr[i]]==maxFreq)
        {
            maxAns = arr[i];
            break;
        }
    }

    return maxAns;
}
