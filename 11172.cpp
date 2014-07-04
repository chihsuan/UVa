#include <iostream>
#include <cstdio>
using namespace std;


int main () {
	
	int t, number1, number2; 
	scanf( "%d", &t );
	
	while( scanf( "%d %d", &number1, &number2) != EOF ){
		if( number1 > number2 ){
			cout << ">" << endl;
		}
		else if( number1 < number2 ){
			cout << "<" << endl; 
		}
		else{
			cout << "=" << endl;
		}
	}

	return 0;
}
