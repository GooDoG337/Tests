#include <iostream>
#include <string>
#include <set>
#include <list>
#include <algorithm>
int main()
{
	std::string word;
	std::cin >> word;
	std::set<char> first;
	std::list<char> removing;
	while(!word.empty())
	{
		first.insert(word[0]);
		word.erase(word.begin());
		//std::cout << word << '\n';
	}
	while(std::cin >> word)
	{
		for(const char& elm:first)
		{
			if(word.find(elm) == std::string::npos)
			{
				removing.push_back(elm);
			}
		}
		for(auto elm: removing)
		{
			first.erase(elm);
		}
		removing.clear();
	}
	for(auto elm: first)
	{
		std::cout << elm << ' ';
	}
	return 0;
}
