class FizzBuzz{
	static void Main(string[] args){
		for(int n = 1;n<=100;n++){
			if(n%15==0){System.Console.WriteLine($"FIZZBUZZ ({n})");}
			else if(n%3==0){System.Console.WriteLine($"FIZZ ({n})");}
			else if(n%5==0){System.Console.WriteLine($"BUZZ ({n})");}
			else{System.Console.WriteLine(n);}
		}
	}
}