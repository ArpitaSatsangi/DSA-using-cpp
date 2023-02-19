#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector <int>& stalls,int k,int mid)
{
    int cowCount=1;
    int lastPos=stalls[0];

    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastPos>=mid)
        {
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos=stalls[i];
        }
    }

    return false;
}


int aggressiveCows(vector <int>& stalls,int k)
{
    sort(stalls.begin(),stalls.end());

    int s=0;
    int e,mid,maxi=-1,ans=-1;
    for(int i=0;i<stalls.size();i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    e=maxi;

    while(s<=e)
    {
        mid=(s+e)/2;

        if(isPossible(stalls,k,mid))
        {
            ans=mid;
            s=mid+1; //for largest solution
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
