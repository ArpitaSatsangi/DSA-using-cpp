string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans ="";

    for(int i=0; i<arr[0].length(); i++)
    {
        char ch = arr[0][i];
        bool matched = true;

        for(int j=1;j<n;j++)
        {
            //not match
            if(arr[j].size()< i || ch != arr[j][i])
            {
                matched = false;
                break;
            }
        }

        if(matched==false)
            break;
        else
            ans.push_back(ch);
    }

    return ans;
}


