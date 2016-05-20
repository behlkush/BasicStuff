#include <iostream>
#include <memory>

int main(){ 
	std::shared_ptr<int> sp(new int(5));
	std::cout << "Value is: " << *sp << std::endl;
	return 0;
}

