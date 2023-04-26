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
        int index = word[0] - 'a';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return false;
        }
        return searchUtil(child, word.substr(1));
    }

    bool search(string word){
        return searchUtil(root, word);
    }
    void DeleteUtil(TrieNode* root, string word){
        if(word.length()==0){
            root->isTerminal = false;
        }
        int index = word[0] - 'a';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return;
        }
        return DeleteUtil(child, word.substr(1));
    }
    void Delete(string word){
        DeleteUtil(root,word);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("abcd");
    t->insertWord("do");
    t->insertWord("time");
    t->insertWord("abot");
    t->insertWord("xyvc");
    cout << "Present or Not: " << t->search("abcdw") << endl;
    cout << "Present or Not: " << t->search("abcd") << endl;
    cout << "Present or Not: " << t->search("abot") << endl;
    cout << "Present or Not: " << t->search("do") << endl;
    cout << "Present or Not: " << t->search("xyvc") << endl;
    t->Delete("do");
    cout << "Present or Not: " << t->search("do") << endl;
    return 0;
}
