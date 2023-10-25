class Solution{
unordered_map<string,int>mp;
vector<vector<string>> ans;
string b;
private:
    void dfs(string word, vector<string>&seq){
        if(word==b){
            reverse(seq.begin(),seq.end());
            ans.push_back(seq);
            reverse(seq.begin(),seq.end());
            return;
        }
        int steps=mp[word];
        for(int i=0;i<word.size();i++){
            char original=word[i];
            for(char c='a';c<='z';c++){
                word[i]=c;
                if(mp.find(word)!=mp.end() && mp[word]+1==steps){
                    seq.push_back(word);
                    dfs(word,seq);
                    seq.pop_back();
                }
            }
            word[i]=original;
        }

    }
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
      unordered_set<string>st(wordList.begin(),wordList.end());
      queue<string>q;
      b=beginWord;
      q.push({beginWord});
      mp[beginWord]=1;
      int n = beginWord.size();
      st.erase(beginWord);
      while(!q.empty()){
          string word=q.front();
          int step = mp[word];
          q.pop();
          if(word==endWord) break;
          for(int i=0;i<n;i++){
              char original=word[i];
              for(char c='a';c<='z';c++){
                  word[i]=c;
                  if(st.count(word)){
                      q.push(word);
                      st.erase(word);
                      mp[word]=step+1;

                  }
              }

              word[i]=original;
          }
      }
      if(mp.find(endWord)!=mp.end()){
          vector<string>seq;
          seq.push_back(endWord);
          dfs(endWord,seq);
      }
      return ans;
    }
};
