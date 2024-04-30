#include "Base.hpp"

int main() {
	Base* obj = generate();
	identify(obj);

	Base& ref = *obj;
	identify(ref);

	delete obj;
	return 0;
}