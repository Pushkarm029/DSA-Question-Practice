#include <iostream>
#include <vector>

using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode('\0');
    }
    void InsertUtil(string word, TrieNode* root) {
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }
        int index = word[0] - 'a';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        InsertUtil(word.substr(1), child);
    }

    void insertWord(string word) {
        InsertUtil(word, root);
    }
    void iterateOverTrie(TrieNode* root,vector<string>& store,string ans){
        if(root->isTerminal){
            store.push_back(ans);
        }
        for(int i=0;i<26;i++){
            if(root->children[i]!=NULL){
                iterateOverTrie(root->children[i],store,ans+root->children[i]->data);
            }
        }
    }
    void searchUtil(TrieNode* root, string word,vector<string>& store){
        if(word.length()==0){
            iterateOverTrie(root,store,"");
            return;
        }
        int index = word[0] - 'a';
        TrieNode* child;
        if (root->children[index] != NULL){
            child = root->children[index];
        }
        else {
            return;
        }
        searchUtil(child, word.substr(1), store);
    }
    vector<string> search(string word){
        vector<string> store;
        searchUtil(root, word, store);
        return store;
    }
};

vector<vector<string>> phoneDirectory(vector<string>& contactList, string queryStr) {
    Trie* t = new Trie();
    for(int i=0; i<contactList.size(); i++) {
        t->insertWord(contactList[i]);
    }
    return {t->search(queryStr)};
}


int main() {
    vector<string> contactList = {"jenny", "john", "joseph", "jalia", "jacob", "jack", "jimmy", "jason", "julie"};
    string queryStr = "ja";
    vector<vector<string>> result = phoneDirectory(contactList, queryStr);
    for(int i=0; i<result.size(); i++) {
        for(int j=0; j<result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
