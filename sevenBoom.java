//problem link : https://edabit.com/challenge/CKqfEowjmSTw2jsso

public class Main
{
	public static void main(String[] args) {
		int[] arr = {2, 55, 60, 97, 86};
		sevenBoom(arr);
	}
	
	public static void sevenBoom(int[] arr){
	    int test;
	    for(int i = 0; i < arr.length; i++){
	        //one digit case
	        if(arr[i] < 10 && arr[i] == 7)
	        System.out.println("Boom");
	        else if(arr[i] < 10 && arr[i] != 7)
	        continue;
	        
	        //more than one digit case
	        else{
	            while(arr[i] != 0){
	                test = arr[i] % 10;
	                if(test == 7){
	                    System.out.println("Boom");
	                    break;
	                }
	                else arr[i] = arr[i] / 10;
	            }
	        }
	    }
	}
}
