#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::pair<std::pair<int,int>,double>> coords { };
	int size;
	std::cin >> size;
	for(size_t x = 0; x < size; x++)
	{
		coords.push_back( {} );;
		std::cin >> coords[x].first.first;
		std::cin >> coords[x].first.second;
		coords[x].second = coords[x].first.first*coords[x].first.first + coords[x].first.second*coords[x].first.second;
	}
	std::sort(coords.begin(), coords.end(), [](const std::pair<std::pair<int,int>, double>& lhs, const std::pair<std::pair<int,int>, double>&  rhs) {return lhs.second < rhs.second;});
	for(std::pair<std::pair<int,int>,double> elm: coords)
	{
		std::cout << elm.first.first << ", " << elm.first.second << '\n'; 
	}
}
