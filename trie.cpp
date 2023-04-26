#include <iostream>
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

    bool searchUtil(TrieNode* root, string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return false;
        }
        return searchtUtil(child, word.substr(1));
    }

    bool search(string word){
        return searchUtil(root, word);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("abcd");
    cout<<"Present or Not"<< t->search("abcdw") <<endl;
    cout<<"Present or Not"<< t->search("abcd") <<endl;
    return 0;
}
