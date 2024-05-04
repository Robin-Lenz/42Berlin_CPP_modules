#include "easyfind.hpp"

int main(){
	size_t count = 9;
	std::vector<int> vec ;
	for (size_t i = 0; i < count; i++){
		vec.push_back(i);
	}
	try{
		easyfind(vec, 10);
	}
	catch(const std::exception& e){
		std::cerr << "value not found" << '\n';
	}
	return 0;
}