#include <vector>
#include <iostream>
#include <utility> // pair
#include <cmath> // abs

std::vector<int> generate(unsigned long long pre) {
	std::vector<int> num;
	int n = pre;
	while (n!=1) {
		if (n%2==0) {
			n = n/2;
			num.push_back(n);
		} else {
			n = ((3*n)+1);
			num.push_back(n);
		}
	};
	return num;
};

std::pair<int, int> keys(std::vector<int> nums) {
	int k0, k1;
	for (auto& n: nums) {
		k0 = std::abs(k0+n);
	};
	k1 = k0/nums.size();
	return std::make_pair(k0, k1);
};

bool solve(unsigned long long, )

int main () {
	std::vector<int> temp;
	temp = generate(1333727373277353535);
	for (auto& n: temp) {
		n == 1 ? std::cout << n << "\n" : std::cout << n << ", ";
	};
	set_keys(temp);
	return 0;
}