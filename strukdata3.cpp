#include <iostream>;
#include <math.h>;
using namespace std;

int main(int argc,char* argv[])
{
int matA[2][2]= {4, 2, 8, 10};
//int matB[2][2]= {-5, 8, 4, -12};
int j,k=5;
cout<<"matriks A"<<endl;
for (int i=0; i<2; i++) {
	for (int j=0; j<2; j++) {
		cout<<matA[i][j]<<" ";
	}
	cout<<endl;
}
/*cout<<"Matrik B"<<endl;
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			cout<<matB[i][j]<<" ";
		}
		cout<<endl;*/

cout<<"Hasil Perkalian Matriks A dengan Eksponen 5"<<endl;
for (int i=0; i<2; i++){
	for (int j=0; j<2; j++){
		//cout<<matA[i][j]; exp(k)<<" ";
		cout<<pow(matA[i][j],5)<<" ";
	}
	cout<<endl;
}

system ("pause");
return 0;
}
