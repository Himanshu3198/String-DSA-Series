/* package codechef; // don't place package name! */
// https://www.codechef.com/problems/HTMLTAGS
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		
		
		  Scanner sc=new Scanner(System.in);
		  
		  int t=sc.nextInt();
		  
		       while(t-->0){
		   
		   
		     String str=sc.next();
		     
		     boolean flag=true;
		     
		    if(str.length() < 4){
                System.out.println("Error");
                continue;
            }
		     int n=str.length();
		     
		     for(int i=2;i<n-1;i++){
		      
		          if(  str.charAt(0)=='<' && str.charAt(1)=='/' && str.charAt(n-1)=='>'){


                  if(  str.charAt(i)>='a' && str.charAt(i)<='z'){
                    
                  }  
                  else if(str.charAt(i)>='0' &&   str.charAt(i)<='9') {
                        

                  }
                  else{
                      flag=false;
                      break;
                    
                  }
               }
               else{
                    flag=false;
                    break;
               }
		     }
		     
		     if(flag){
		      System.out.println("Success");
		     }
		     else{
		      System.out.println("Error");
		     }

		  }
	}
}
