#include "Serializer.hpp"

int main(){
	// Create an instance of the Data structure
	Data data;
	data.value = 42; // Set some value

	// Serialize the pointer to the Data object
	uintptr_t serializedPtr = Serializer::serialize(&data);

	// Deserialize the serialized pointer
	Data* deserializedPtr = Serializer::deserialize(serializedPtr);

	// Compare original and deserialized pointers
	if (deserializedPtr == &data) {
		std::cout << "Serialization and deserialization successful!" << std::endl;
	} else {
		std::cerr << "Serialization and deserialization failed!" << std::endl;
	}


	return 0;
}