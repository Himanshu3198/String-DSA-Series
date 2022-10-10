class Solution {
    public String breakPalindrome(String pal) {
     
        
        char s[]=pal.toCharArray();
        int n=s.length;
        if(n==1) return "";
        boolean flag=true;
        for(int i=0;i<n;i++){
            
            if(s[i]!='a' && i!=n/2){
                s[i]='a';
                flag=false;
                break;
            }
        }
        if(flag) s[n-1]='b';
        return String.valueOf(s);
    }
}
