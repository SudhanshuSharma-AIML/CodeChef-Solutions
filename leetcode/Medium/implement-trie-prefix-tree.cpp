// Problem: Implement Trie (Prefix Tree)
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/implement-trie-prefix-tree/
// Solved on: 2026-11-26T09:02:42.779Z

class Trie {
public:
    Trie* array[26];
    bool isendofword;

    Trie() {
        isendofword=false;
        for(int i=0;i<26;i++){
            array[i]=NULL;
        }
    }

    void insert(string word) {
        Trie*current=this;
        for(char ch:word){
            int index=ch-'a';
            if(current->array[index]==NULL){
                current->array[index]=new Trie();
            }
            current=current->array[index];
        }
        current->isendofword=true;
    }

    bool search(string word) {
        Trie*current=this;
        for(char ch:word){
            int index=ch-'a';
            if(current->array[index]==NULL){
                return false;
            }
            current=current->array[index];
        }
        return current->isendofword;
    }

    bool startsWith(string prefix) {
        Trie*current=this;
        for(char ch:prefix){
            int index=ch-'a';
            if(current->array[index]==NULL){
                return false;
            }
            current=current->array[index];
        }
        return true;
    }
};