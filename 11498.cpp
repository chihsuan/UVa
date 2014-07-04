#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int k, n, m ,x, y;

	while(1){
		scanf( "%d", &k );
		if( k == 0 ){
			return 0;
		}
		scanf( "%d %d" , &n, &m );
	
		for(int i = 0; i < k; ++i){
			scanf( "%d %d" , &x, &y );
			
			if( x == n || y == m ){
				cout << "divisa" << endl;
			}
			else if( x < n && y > m ){
				cout << "NO" << endl;
			}
			else if( x > n && y > m ){
				cout << "NE" << endl;
			}
			else if( x < n && y < m ){
				cout << "SO" << endl;
			}
			else{
				cout << "SE" << endl;
			}
		
		}
	}
}
