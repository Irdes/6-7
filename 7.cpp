#include "matrixIO.h"
#include "taskworks.h"
#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
	std::ifstream input;
	input.open("input.txt");
	std::vector<std::vector<int>> matrix = matrixIO::readSquareMatrix(input);
	input.close();

	if (taskworks::findExtremeInMatrix(matrix, [](int a, int b) {return a < b; })
		+ taskworks::findExtremeInMatrix(matrix, [](int a, int b) {return a > b; }) == 0) {
		for (auto & row : matrix) {
			if (std::any_of(row.begin(), row.end(), taskworks::containsEight)) sort(row.begin(), row.end());
		}
	}

	std::ofstream output;
	output.open("output.txt");
	matrixIO::writeMatrix(output, matrix);
	output.close();
}
