public class FizzBuzz{
	public static void main(String[] args){
		for(int n = 1; n<=100; n++){
			if(n%15==0){System.out.println("FIZZBUZZ (" + n +")");}
			else if(n%3==0){System.out.println("FIZZ (" + n +")");}
			else if(n%5==0){System.out.println("BUZZ (" + n +")");}
			else{System.out.println(n);}
		}
	}
}