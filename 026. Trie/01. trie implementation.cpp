#include <iostream>
using namespace std;

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

        int index = word[0]-'A';
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



    bool searchUtil(TrieNode *root, string word)
    {
        if(word.length()==0)
        {
            return root->isTerminal;
        }

        int index = word[0]-'A';
        TrieNode *child;

        if(root->children[index]!=NULL)
        {
            //present
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
};


int main()
{
    Trie * t = new Trie();


    t->insertWord("CAR");
    t->insertWord("TIME");
    t->insertWord("DO");
    t->insertWord("SCHOOL");


    cout<<"present or not: "<<t->searchWord("TIM")<<endl; //0
    cout<<"present or not: "<<t->searchWord("CAR")<<endl; //1

    return 0;
}
