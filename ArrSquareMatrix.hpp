#include "Complex.hpp"
#include "ArraySequence.hpp"
#include <iostream>
#include <cassert>

template <class T> 
class ArrSquareMatrix {
private:
	ArraySequence<T>* data;
	int size;

public:
	ArrSquareMatrix() {
		data = new ArraySequence<T>(0);
	}
	ArrSquareMatrix(int m, T items[]) {
		ArraySequence<T>* arr = new ArraySequence<T>[m];
		for (int i = 0; i < m; i++) {
				arr[i] = items[i];
		}
		size = m;
		
	}
	ArrSquareMatrix(ArrSquareMatrix<T>& sqmtx) {
		data = new ArraySequence<T>[size];
		for (int i = 0; i < size; i++) {
			data->Resize(sqmtx.size);
			data->Set(i, sqmtx.data->Get(i));
		}
	}

	ScalarMult(T scalar) {
		for (int i = 0; i < size; i++) {
			data->Set(i, scalar*(data->Get(i)));
		}
	}

	//SumMatrix();
	T GetNorm()[
		T norm = 0;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				norm += (data[i][j]) * (data[i][j]);
			}
		}
		return norm;
	]


	



};