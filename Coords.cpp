#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::pair<std::pair<int,int>,double>> coords { {{1,2}, 0}, {{1,5}, 0}, {{50,1}, 0}, {{0,0}, 0}, {{1,1}, 0}, {{-1,-1}, 0}, {{0,10}, 0} };
	for(size_t x = 0; x < coords.size(); x++)
	{
		coords[x].second = coords[x].first.first*coords[x].first.first + coords[x].first.second*coords[x].first.second;
	}
	std::sort(coords.begin(), coords.end(), [](const std::pair<std::pair<int,int>, double>& lhs, const std::pair<std::pair<int,int>, double>&  rhs) {return lhs.second < rhs.second;});
	for(std::pair<std::pair<int,int>,double> elm: coords)
	{
		std::cout << elm.first.first << ", " << elm.first.second << '\n'; 
	}
}
