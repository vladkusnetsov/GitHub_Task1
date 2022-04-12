#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;
	std::cout << "online change" << std::endl;
	std::cout << "change" << std::endl;
	std::cout << "change 1" << std::endl;
	std::cout << "change 2" << std::endl;
	std::cout << "change 3" << std::endl;

	std::for_each(
		in(std::cin), in(), std::cout << (1 * 3) << "");
}
