/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

class Trie_node {
    public : 
        char data;
        Trie_node* child[26];
        bool t ;

    Trie_node(char ch){
        data = ch;
        for (int i = 0; i < 26; i++) child[i] = NULL;
        t = false;
        
    }
};

class Trie {
    public:
        Trie_node* root;

    void InsertUtill(Trie_node* root, string word){
        //basecase
        if(word.length()==0) root-> t = true;
        
    }
    
    void InsertWord(string word){
        InsertUtill(root,word);
    }

}




int main(){
    return 0;
}
/* problem link: */