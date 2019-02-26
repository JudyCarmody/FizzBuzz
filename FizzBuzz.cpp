#include <iostream>
int main(){
	int n = 1;
	while(n<=100){
		if(n%15==0)
			std::cout << "FIZZBUZZ -- " << n << "\n";
		else if(n%3==0)
			std::cout << "FIZZ -- " << n << "\n";
		else if(n%5==0)
			std::cout << "BUZZ -- " << n << "\n";
		else
			std::cout << n << "\n";
		n++;
	}
	return n;
}