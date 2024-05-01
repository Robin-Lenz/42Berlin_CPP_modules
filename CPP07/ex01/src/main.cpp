#include "iter.hpp"

int main(){
	int len = 5;
	int arr[len] = {65, 66, 67, 68, 69};

	iter(arr, len, Funky<int>);

	for (int i = 0; i < len; i++){
		std::cout << "after: " << arr[i] << '\n';
	}
	return 0;
}

