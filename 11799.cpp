#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int t, n, c, s = 0, number = 0;

	while ( scanf( "%d", &t ) != EOF ){
		for(int i = 0; i < t; ++i){
			scanf( "%d", &n);
			for(int j = 0; j < n; ++j){
				scanf( "%d", &c );
				if( c > s ){
				 	s = c;
				}
			}
			cout << "Case " << ++number << ": " << s << endl;
			s = 0; 
		}
	}

	return 0;
}
