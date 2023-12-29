class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for(int i=0;i<26;i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;

    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        if(word.length()==0)
        {
            root -> isTerminal=true;
            return;
        }

        int index = word[0]-'a';
        TrieNode *child;

        if(root->children[index]!=NULL)
        {
            //present
            child = root->children[index];
        }
        else
        {
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);

    }

    void print_suggestions(string prefix,TrieNode* curr,vector<string>&temp)
    {
        if(curr->isTerminal)
        {
            temp.push_back(prefix);
        }

        for(char ch='a'; ch<='z'; ch++)
        {
            TrieNode*next = curr->children[ch-'a'];

            if(next!=NULL)
            {
                prefix.push_back(ch);
                print_suggestions(prefix,next,temp);
                prefix.pop_back();
            }
        }
    }


vector<vector<string>> get_suggestions(string &queryStr) 
{
    TrieNode *prev = root;
    string prefix = "";
    vector<vector<string>> output;

    for(int i=0;i<queryStr.length();i++)
    {
        char last_ch = queryStr[i];

        prefix.push_back(last_ch);

        TrieNode *curr = prev->children[last_ch-'a'];

        if(curr==NULL)
        {
            break;
        }
        
        vector <string> temp;
        print_suggestions(prefix, curr, temp);

        output.push_back(temp);
        temp.clear();

        prev=curr;
    }

    return output;
}




};


vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    Trie *t = new Trie();

    for(int i=0;i<contactList.size();i++)
    {
        string str = contactList[i];
        t->insertWord(str);
    }

    return t->get_suggestions(queryStr);

}
