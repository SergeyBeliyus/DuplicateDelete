#include <iostream>
#include <set>

int main() {
	int count;
	std::set<int, std::greater<int>> data;
	std::cout << "Введите количество вводимых данных: ";
	std::cin >> count;
	for (size_t i = 0; i < count; i++) {
		int number;
		std::cout << i + 1 << ": ";
		std::cin >> number;
		data.insert(number);
	}
	for (const auto elem : data) {
		std::cout << elem << std::endl;
	}
}