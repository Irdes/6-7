#include <vector>
#include <fstream>

namespace matrixIO {
	std::vector<std::vector<int>> readSquareMatrix(std::ifstream& file) {
		std::vector<std::vector<int>> result{};
		int n;
		file >> n;

		for (int i = 0; i < n; i++) {
			std::vector<int> row;
			for (int j = 0; j < n; j++) {
				int a;
				file >> a;
				row.push_back(a);
			}
			result.push_back(row);
		}

		return result;
	}

	void writeMatrix(std::ofstream& file, std::vector<std::vector<int>> matrix) {
		for (auto row : matrix) {
			for (auto element : row) {
				file << element << " ";
			}
			file << "\n";
		}
	}
}