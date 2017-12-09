#include<iostream>

double squareRoot(double x, double step = 1, double count = 0, int depth = 0){
	double square = count*count;
	//std::cout << "Count: " << count << ", Step: " << step << "\n"; 

	if((square == x)||(depth  >= 100)) return count;
	if(square > x) return squareRoot(x, step/2, count-step, depth+1);
	if(square < x) return squareRoot(x, step, count+step, depth+1);

}



int main(){
	double x;
	while(1){
		std::cout << "Enter x: ";
		std::cin >> x;
		std::cout << "√" << x << " ≈ " << squareRoot(x) << std::endl;
	}
	return 0;
}
