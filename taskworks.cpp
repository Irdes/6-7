#include <vector>

namespace taskworks {
	int findExtremeInMatrix(std::vector<std::vector<int>> matrix, bool (*comparer) (int, int)) {
		int max = matrix[0][0];
		for (const auto & row : matrix)
			for (const auto & element : row)
				if (comparer(element, max)) max = element;
		return max;
	}

	bool containsDigit(int a, int digit) {
		if (a < 0) a = -a;
		while (a > 0) {
			if (a % 10 == digit) return true;
			a /= 10;
		}
		return false;
	}

	bool containsEight(int a) { return containsDigit(a, 8); }
}