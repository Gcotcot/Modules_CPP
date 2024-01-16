#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
}

PmergeMe::~PmergeMe(void)
{
}

void	PmergeMe::add_value(int value)
{
	this->vect.insert(this->vect.begin(), value);
	this->deck.push_front(value);
}

void	PmergeMe::aff_vect(void)
{
	clock_t start = clock();
	this->vect = this->merge_vect(this->vect);
	clock_t end = clock();
	std::vector<int>::iterator it = this->vect.begin();
	std::cout << "After: ";
	while (it != this->vect.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->vect.size() << " elements with std::vect : " << (double)(end - start)/CLOCKS_PER_SEC  << "s\n";
}

void	PmergeMe::aff_list(void)
{
	clock_t start = clock();
	this->deck = this->merge_list(this->deck);
	clock_t end = clock();
	std::cout << "Time to process a range of " << this->deck.size() << " elements with std::list : " << (double)(end - start)/CLOCKS_PER_SEC  << "s\n";
	/*std::cout << std::endl;
	for (std::list<int>::iterator	it = this->deck.begin(); it != this->deck.end(); it++)
		std::cout << *it << " ";*/
}

std::vector<int>	PmergeMe::insertion_vector(std::vector<int> ref)
{
	std::vector<int>::iterator	it = ref.begin() + 1;
	while (it != ref.end())
	{
		std::vector<int>::iterator	it2 = it - 1;
		int	value = *it;
		int	value2 = *it2;
		while (value < *it2 && it2 != ref.begin())
			it2--;
		it++;
		if (value < *it2 && it2 == ref.begin())
		{
			ref.erase(it - 1);
			ref.insert(it2, value);
		}
		else if (*it2 != value2)
		{
			ref.erase(it - 1);
			ref.insert(it2 + 1, value);
		}
	}
	return (ref);
}

std::vector<int>	PmergeMe::merge_vect(std::vector<int> ref)
{
	if (ref.size() <= 1 || ref.size() < this->vect.size() / 5)
		return ref;
	std::vector<int>::iterator	it = ref.begin();
	std::vector<int>::iterator	it2 = it + ref.size() / 2;
	std::vector<int>		left;
	std::vector<int>		right;
	left.insert(left.begin(), it, it2);
	right.insert(right.begin(), it2, ref.end());
	left = this->merge_vect(left);
	right = this->merge_vect(right);
	left.insert(left.end(), right.begin(), right.end());
	//std::sort(left.begin(), left.end());
	left = this->insertion_vector(left);
	return (left);
}

std::list<int>	PmergeMe::insertion_list(std::list<int> ref)
{
	std::list<int>::iterator	it = ref.begin();
	it++;
	while (it != ref.end())
	{
		std::list<int>::iterator	it2 = it;
		it2--;
		int	value = *it;
		int	value2 = *it2;
		while (value < *it2 && it2 != ref.begin())
			it2--;
		std::list<int>::iterator	it3 = it;
		it++;
		if (value < *it2 && it2 == ref.begin())
		{
			ref.erase(it3);
			ref.insert(it2, value);
		}
		else if (*it2 != value2)
		{
			ref.erase(it3);
			it2++;
			ref.insert(it2, value);
		}
	}
	return (ref);
}

std::list<int>	PmergeMe::merge_list(std::list<int> ref)
{
	if (ref.size() <= 1 || ref.size() < this->deck.size() / 5)
		return ref;
	std::list<int>::iterator	it = ref.begin();
	std::list<int>::iterator	it2 = it;
	for (long unsigned int i = 0; i < ref.size() / 2; i++)
		it2++;
	std::list<int>		left;
	std::list<int>		right;
	left.insert(left.begin(), it, it2);
	right.insert(right.begin(), it2, ref.end());
	left = this->merge_list(left);
	right = this->merge_list(right);
	left.insert(left.end(), right.begin(), right.end());
	//std::sort(left.begin(), left.end());
	left = this->insertion_list(left);
	return (left);
}
