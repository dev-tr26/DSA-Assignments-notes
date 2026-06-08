#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string>ans;
    int m,n;

    struct trieNode{
        bool endOfWord;
        string word;
        trieNode*children[26];
    };

    // get trie node 
    trieNode * getNode(){
        trieNode* newNode = new trieNode();
        newNode ->endOfWord = false;
        for(int i=0; i<26; i++){
            newNode->children[i] = NULL;
        } 
        return newNode;
    }

    // insert elements of node 
    void insert(trieNode*root, string&word){
        trieNode*crawler = root;

        for(int i=0; i<word.length(); i++){
            char ch = word[i];
            if(crawler->children[ch - 'a'] == NULL){
                crawler->children[ch - 'a'] = getNode();
            }
            crawler = crawler->children[ch - 'a'];
        }
        crawler->endOfWord = true;
        crawler->word = word;
    }

    vector<vector<int>>directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    void findWords2(vector<vector<char>>&board, int i, int j, trieNode*root){
        if(i < 0 || i >=m || j< 0 || j >= n )return;

        if(board[i][j] == '$' || root->children[board[i][j]- 'a'] == NULL)return;

        root = root->children[board[i][j] - 'a'];
        if(root->endOfWord == true){
            ans.push_back(root->word);  // don't stop here as there can be newword ending after that letter 
            root->endOfWord = false;
        }

        char temp = board[i][j];
        board[i][j] = '$'; // mark visited 
        
        // left right up down 
        for(vector<int>&dir : directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            findWords2(board, new_i, new_j, root);
        }
        board[i][j] = temp; // marked unvisited for next time

    }



    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m = board.size();
        n = board[0].size();

        trieNode*root = getNode();

        for(string &word : words){
            insert(root, word);
        }
        
        // traverse in grid (just once) and find all words in trie if present 
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                char ch = board[i][j];

                if(root->children[ch - 'a']!= NULL){
                    findWords2(board, i, j, root);
                }
            }
        }
        return ans;
    }
};