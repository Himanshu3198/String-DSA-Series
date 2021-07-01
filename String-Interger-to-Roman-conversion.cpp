// 12. Integer to Roman


class Solution {
public:
    string intToRoman(int num) {
        
        vector<int> intForm={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        
        std::vector<std::string>stringForm({"M","CM","D","CD","C","XC","L","XL","X","IX",
                                "V","IV","I"});
        
        
        
        
        string res="";
        
        for(int i=0;i<intForm.size();i++){
            
            while(num>=intForm[i]){
                res+=stringForm[i];
                num-=intForm[i];
                    
            }
        }
        return res;
    }
};
