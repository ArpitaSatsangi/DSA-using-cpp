class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> vec;
        sort(words.begin(), words.end());
        
        for(char c: words[0]) {
            bool common = true;
            for(int i=1; i<words.size(); i++) {
                if(words[i].find(c) == string::npos) { // letter not found 
                    common = false; break;
                }
                else {
                    words[i].erase(words[i].find(c), 1);
                }
            }
            if(common) {
                vec.push_back(string(1,c));
            }
        }
        return vec;
    }
};
