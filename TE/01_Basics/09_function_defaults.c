// Hear we are going to use default parameters
// You need to pass default pars for right side vars first

#include <iostream>

int Add(int a, int b=14){
	return a+b;
}

int main(){
	std::cout << Add(10) << std::endl;
}