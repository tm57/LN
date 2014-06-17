#include <iostream>
#include <fstream>
#include "Matrix.h"
#include <string>
#include <cstdlib>
#include <armadillo>

using namespace std;
using namespace arma;

void usage(int x);

int main(int argc,char **argv){
	usage(argc);
	Matrix A(argv[1]);
	A.mat_diag();
	A.mat_solve();


	return EXIT_SUCCESS;
}

void usage(int x){
	if (x != 2){
		cout<<"\nusage ./program [filename]"<<endl;
		exit(EXIT_FAILURE);
	}

}
