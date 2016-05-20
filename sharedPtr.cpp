#include <iostream>
#include <memory>
//First edit of sharedPtr to check git repository working
int main(){ 
	std::shared_ptr<int> sp(new int(5));
	std::cout << "Value is: " << *sp << std::endl;
	return 0;
}

