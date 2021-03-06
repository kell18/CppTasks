#include "Console.h"


void Console::printArray(int *array, unsigned size) {
	for (unsigned i = 0; i < size; ++i) {
		printf(" [%d]: %d; ", i, array[i]);
	}
}

void Console::printArray(float *array, unsigned size) {
	for (unsigned i = 0; i < size; ++i) {
		printf(" [%d]: %f; ", i, array[i]);
	}
}

void Console::printArray(char const *title, int *array, unsigned size) {
	puts(title);
	printArray(array, size);
	puts("\n");
}

void Console::printVector(vector<int> const &vect) {
	unsigned long size = vect.size();
	for (unsigned int i = 0; i < size; ++i) {
		cout << "[" << i + 1 << "]" << ": " << vect[i] << "; ";
		if (i > 100) {
			cout << " ... " << size - i << " other items";
			break;
		}
	}
	cout << endl;
}

void Console::printMatrix(vector<vector<int> > const &matrix) {
	for (unsigned int i = 0; i < matrix.size(); ++i) {
		if (i == 0) {
			int margin = 10;
			for (unsigned int j = 0; j < matrix[0].size(); j++) {
				if (j > 0) margin = 6;
				cout << setw(margin) << "[" << j + 1 << "]";
			}
			cout << endl;
		}
		cout << "[" << i + 1 << "]" << setw(4);
		for (unsigned int j = 0; j < matrix[i].size(); ++j) {
			cout << setw(8) << matrix[i][j];
		}
		cout << endl;
	}
}

void Console::printMatrix(int const *matrix, unsigned rows, unsigned cols) {
	for (unsigned int i = 0; i < rows; ++i) {
		if (i == 0) {
			int margin = 10;
			for (unsigned int j = 0; j < cols; j++) {
				if (j > 0) margin = 6;
				cout << setw(margin) << "[" << j + 1 << "]";
			}
			cout << endl;
		}
		cout << "[" << i + 1 << "]" << setw(4);
		for (unsigned int j = 0; j < cols; ++j) {
			cout << setw(8) << matrix[i * cols + j];
		}
		cout << endl;
	}
}

void Console::printMatrix(float const *matrix, unsigned rows, unsigned cols) {
	for (unsigned int i = 0; i < rows; ++i) {
		if (i == 0) {
			int margin = 16;
			for (unsigned int j = 0; j < cols; j++) {
				if (j > 0) margin = 10;
				cout << setw(margin) << "[" << j + 1 << "]";
			}
			cout << endl;
		}
		cout << "[" << i + 1 << "]" << setw(4);
		for (unsigned int j = 0; j < cols; ++j) {
			cout << setw(14) << matrix[i * cols + j];
		}
		cout << endl;
	}
}

