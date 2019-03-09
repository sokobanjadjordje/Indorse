#include "Matrix.h"
#include <vector>

using namespace std;

int main()
{
	int i, j, X, Y;
	vector< vector<int> > a;
	
	
	printf("Input X and Y: ");
	scanf("%d %d", &X, &Y);
	
	printf("Input Matrix:\n");
	for (i=0; i<Y; i++) {
		vector<int> b = vector<int>(X, 0);
		for (j=0; j<X; j++) {
			scanf("%d", &b[j]);
		}
		a.push_back(b);
	}
	
	Matrix<int> ma = Matrix<int> (a);
	Matrix<int> mb = ma.transpose();
	
	printf("Original Matrix = \n");
	ma.print();
	printf("Transposed Matrix = \n");
	mb.print();
}
