#pragma once
#include "taskworks.cpp"
#include <vector>

namespace taskworks {
	int findExtremeInMatrix(std::vector<std::vector<int>> matrix, bool (*comparer) (int, int));
	bool containsDigit(int a, int digit);
	bool containsEight(int a);
}