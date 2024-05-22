#include "MutantStack.hpp"

int main(){
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	mstack.push(5);

	MutantStack<int>::it it = mstack.begin();
	MutantStack<int>::it ite = mstack.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	// for overload operators testing
	MutantStack<int> s(mstack);
	MutantStack<int> t = mstack;
	std::cout << "/ " << s.top() << " " << t.top() << std::endl;
	std::cout << std::endl;

	/*same with a list*/

	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << std::endl;

	lst.pop_back();

	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	lst.push_back(5);

	std::list<int>::iterator it_l = lst.begin();
	std::list<int>::iterator ite_l = lst.end();

	while (it_l != ite_l)
	{
		std::cout << *it_l << std::endl;
		++it_l;
	}

	// for overload operators testing
	std::list<int> x(lst);
	std::list<int> z = lst;
	std::cout << "/ " << x.back() << " " << z.back() << std::endl;
	std::cout << std::endl;

	return 0;
}