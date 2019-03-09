#include <iostream>
#include <vector>

using namespace std;

template<class T>
class Matrix {
	vector<vector<T> > elements;
	int nrow;
	int ncol;

public:
	Matrix();
	Matrix(int rn, int cn);
	Matrix(vector<vector<T> > elements);
	
	~Matrix();
	void print();

	Matrix<T> transpose();
};

template<class T>
Matrix<T>::Matrix() {
	nrow = 1;
	ncol = 1;
	for (int i = 0; i < nrow; i++) {
	    vector<T> row(ncol, 0);
	    elements.push_back(row);
	}
}

template<class T>
Matrix<T>::Matrix(int rn, int cn){
	nrow = rn;
	ncol = cn;
	for (int i = 0; i < nrow; i++) {
	    vector<T> row(ncol, 0);
	    elements.push_back(row);
	}
}


template<class T>
Matrix<T>::Matrix(vector< vector<T> > element) {
	nrow = element.size();
	ncol = element[0].size();
	
	elements = element;
}

template<class T>
Matrix<T>::~Matrix(){}

template<class T>
Matrix<T> Matrix<T>::transpose() {
	Matrix<T> trans = Matrix<T>(ncol, nrow);
	for (int i = 0; i < nrow; ++i){
	    for (int j = 0; j < ncol; ++j){
	        trans.elements[j][i] = elements[i][j];
	    }
	}
	return trans;
}

template<class T>
void Matrix<T>::print() {
	for (int i = 0; i < nrow; i++) {
	    for (int j = 0; j < ncol; j++)
	    {
	        cout << elements[i][j] << " ";
	    }
	    cout << endl;
	}
}

