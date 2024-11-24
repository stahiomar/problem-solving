//problem link : https://edabit.com/challenge/sCP58J9vcexchgwo7

public class Main
{
	public static void main(String[] args) {
		System.out.println(validate("102932"));    
		}
	
	public static boolean validate(String PIN){
	    if(PIN.length() != 6) return false;
	    else{
	        for(int i = 0; i < PIN.length(); i++){
	            if(!Character.isDigit(PIN.charAt(i))) return false;
	        }
	        return true;
    
	    }
	  }
}
