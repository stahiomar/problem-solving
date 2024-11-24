//level : very hard
//problem link : https://edabit.com/challenge/KZrmicjc8zCZyGNee
import java.util.*;
public class Main
{
	public static void main(String[] args){
		String s = "df";
		char[] charArray = s.toCharArray();
        charArray[0] = 'A';
		encrypt("Hello");

	}
	
	
	
	public static ArrayList<Integer> encrypt(String message){
	    ArrayList<Integer> code = new ArrayList<>();
	    for(int i = 0; i < message.length(); i++){
	        if(i == 0) code.add( (int) message.charAt(i) );
	        else{
	            int calc = (int) message.charAt(i) - (int) message.charAt(i - 1);
	            code.add(calc);
	        }
	        
	    }
	    System.out.println(decrypt(code));
	    return code;
	    
	}
	
	
	
	public static String decrypt(ArrayList<Integer> code) {
        StringBuilder decryptedString = new StringBuilder();
        int calc = code.get(0);
        
        for (int i = 0; i < code.size(); i++) {
            if (i == 0) {
                decryptedString.append(Character.toString(code.get(i)));
            } else {
                calc += code.get(i);
                decryptedString.append((char) calc);
            }
        }
        
        return decryptedString.toString();
    }
}
