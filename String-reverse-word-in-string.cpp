// 151. Reverse Words in a String


class Solution {
public:
    string reverseWords(string s) {
     
        
     
        
        stack<string>st;
        string temp="";
        string res="";
        
        
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]==' ') {
                
                if(temp.length()>0){
                    st.push(temp);
                    temp="";
                    
                }
            }
            else{
                temp=temp+s[i];
            }
            
            
        }
        
        res=res+temp;
        while(!st.empty()){
            
            string cur=st.top();
            st.pop();
            res=res+" "+cur;
        }
        
        if(res[0]==' '){
            res=res.substr(1);
        }
        
        return res;
    }
};
