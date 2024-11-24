//problem link : https://edabit.com/challenge/HjvecTb3aFMjJ59sB

import java.lang.StringBuilder;
public class Main
{
	public static void main(String[] args) {
	    
		System.out.println(toCamelCase("test_fun"));
		
	}
	
	public static String toSnakeCase(String str) {
		StringBuilder res = new StringBuilder();
		for(int i = 0; i < str.length(); i++){
		    char ch = str.charAt(i);
		    if(!Character.isUpperCase(ch)) res.append(ch);
		    else{
		        res.append('_');
		        res.append(Character.toLowerCase(ch));
		    }
		}
		return res.toString();
		
	}
	
	public static String toCamelCase(String str) {
		StringBuilder res = new StringBuilder();
		for(int i = 0; i < str.length(); i++){
		    char ch = str.charAt(i);
		    if(ch == '_'){
		        char camel = Character.toUpperCase(str.charAt(i + 1));
		        i += 1;
		        res.append(camel);
		    }
		    else res.append(ch);
		}
		return res.toString();
		
	}
}
