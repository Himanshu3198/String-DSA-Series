class Pairs{
    public :
    int idx;
    char letter;
    Pairs(int i,char l){
        idx=i;
        letter=l;
    }
};
class Solution {
public:
    string pushDominoes(string s) {
          int n=s.size(); 
          queue<Pairs>q;
          for(int i=0;i<n;i++){
              
              if(s[i]=='L' && i-1>=0 && s[i-1]=='.'){
                  q.push(Pairs(i-1,'L'));
              }
              else if(s[i]=='R' && i+1<n && s[i+1]=='.'){
                  q.push(Pairs(i+1,'R'));
              }
          }
          int t=0;
          while(!q.empty()){
              string temp=s;
              int size=q.size();
              for(int i=0;i<size;i++){
                  
                  int curr=q.front().idx;
                  char c=q.front().letter;
                  q.pop();
                  if(c=='L'){
                      if(curr-1>=0 && s[curr-1]=='R') continue;
                      else {
                          temp[curr]=c;
                          if(curr-1>=0 && s[curr-1]=='.'){
                               q.push(Pairs(curr-1,'L'));
                          }
                          
                      }
                  }else if(c=='R'){
                      if(curr+1<n && s[curr+1]=='L') continue;
                      else {
                          temp[curr]=c;
                          if(curr+1<n && s[curr+1]=='.'){
                              q.push(Pairs(curr+1,'R'));
                          }
                          
                      }
                  }
              }
              s=temp;
          }
       
          return s;
          
        
    }
};
