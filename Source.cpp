#include <iostream>
#include "Singleton.h"
#include <fstream>
using namespace std;
/*int Skaitymas ( char a, int & n );
int Skaiciavimas ( int Sk[], char A, int n);
int Maksimumas ( int maks, int Sk[]);
void Isvedimas ( int Sk[], int maks);*/
int main()
{
	char A[1000];
	int Sk[1000], n = 1000, maks = 0;

	Singleton::Instance()->Maksimumas( maks, Sk );

}
/*int Skaitymas ( char A[], int & n ){
	ifstream fd ("Tekstas.txt");
	for ( int i = 0; !fd.eof() && i < n; i++){
	fd >> A[i];
	}
	fd.close();
	return A[1000];
}
int Skaiciavimas ( int Sk[], char A[], int n){
	for ( int i = 0; i < 10; i++)
		for ( int j = 0; j < n; j++)
		if ( A[j] == i  ) Sk[i]++;
return Sk[1000];
}
int Maksimumas ( int maks, int Sk[]){
	for ( int i = 0; i < 10; i++){
		if ( Sk[i] > maks ) maks = Sk[i];
	}
	return maks;
}
void Isvedimas ( int Sk[], int maks){
	ofstream fr ( "Rezultatai.txt");
	for ( int i = 0; i < 10; i++){
		fr << i;
		fr << Sk[i];
	}
	fr.close();
	cout << " Daugiausiai faile yra tokiu skaitmenu : " << maks << endl;
}*/