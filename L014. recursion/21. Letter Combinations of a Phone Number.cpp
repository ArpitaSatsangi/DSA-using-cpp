/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that 
the number could represent. Return the answer in any order.

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
*/

class Solution {
private:
    void solve(vector <string> & ans, string output, int index,string digits,string mapping[])
    {
        if(index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        int value = digits[index] -'0';
        string elements = mapping[value] ;

        for(int i=0; i<elements.length();i++)
        {
            output.push_back(elements[i]);
            solve(ans, output, index+1, digits, mapping);
            output.pop_back();
        }
    }


public:
    vector<string> letterCombinations(string digits) {

        vector <string> ans;
        string output="";
        if(digits.length()==0)
        {
            return ans;
        }

        int index=0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl" ,"mno", "pqrs", "tuv", "wxyz"};

        solve(ans,output,index,digits,mapping);

        return ans;
    }
};
