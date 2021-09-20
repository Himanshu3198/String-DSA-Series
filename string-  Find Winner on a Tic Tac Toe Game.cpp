//   Find Winner on a Tic Tac Toe Game


class Solution {
public:
    
    bool cal_row(char a[][3],char c){

   if(a[0][0]==c and a[0][1]==c and a[0][2]==c){

         return true;
   }

   if(a[1][0]==c and a[1][1]==c and a[1][2]==c){

      return true;
   }

      if(a[2][0]==c and a[2][1]==c and a[2][2]==c){

       return true;
   }
        
        return false;


}

bool cal_col(char a[][3],char c){

    if(a[0][0]==c and a[1][0]==c and a[2][0]==c){
        return true;
    }

       if(a[0][1]==c and a[1][1]==c and a[2][1]==c){
        return true;
    }

       if(a[0][2]==c and a[1][2]==c and a[2][2]==c){
       return true;
    }
    return false;
}
    bool cal_dig(char a[][3],char c){

      if(a[0][0]==c and a[1][1]==c and a[2][2]==c){
          return true;
      }

      if(a[0][2]==c and a[1][1]==c and a[2][0]==c){
         return true;
      }
        
        return false;
}
    string tictactoe(vector<vector<int>>& moves) {
        
        
           char a[3][3];
             bool flag=true;
             for(auto it:moves){
                 
                 if(flag){
                     a[it[0]][it[1]]='X';
                     flag=false;
                 }else{
                      a[it[0]][it[1]]='O';
                     flag=true;
                     
                 }
                 
             }
        
              if( cal_row(a,'X'))  return "A";
              
              if( cal_col(a,'X'))  return "A";

              if(cal_dig(a,'X'))   return "A";
            
              if( cal_row(a,'O'))  return "B";
              
              if( cal_col(a,'O'))  return "B";

              if(cal_dig(a,'O'))   return "B";
                 
                 
                 
                 if(moves.size()==9)
                     return "Draw";
                 
                 
                 return "Pending";
            
            
        
        
    }
};
