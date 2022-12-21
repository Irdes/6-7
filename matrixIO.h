#pragma once
#include "matrixIO.cpp"
#include <vector>
#include <fstream>

namespace matrixIO {
	std::vector<std::vector<int>> readSquareMatrix(std::ifstream& file);
	void writeMatrix(std::ofstream& file, std::vector<std::vector<int>> matrix);
}