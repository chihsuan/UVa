#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;

int main(){

	int n, p;
	float price;
	int met;
	string tmp;
	int best_value = -1;
	float best_price;
	string best_proprosal;
	int number = 0;
	string tmp2;

	while(1){
		scanf( "%d %d", &n, &p);
		if( n == 0 && p == 0){
			return 0;
		}
		getline(cin,tmp);
		for(int i = 0; i < n; ++i){
			getline(cin,tmp);
		}
		for( int j = 0; j < p; ++j){
			getline(cin,tmp);
			scanf( "%f %d", &price, &met);
			if(  met > best_value ){
				best_value = met;
				best_price = price;
				best_proprosal = tmp;
			}
			else if( met == best_value && best_price > price ){
				best_price = price;
				best_proprosal = tmp;
			}
			getline(cin,tmp2);
			for(int i = 0; i < met; ++i){
				getline(cin,tmp2);
			}
		}
		if( number >= 1 ){
			cout << endl;
		}
		cout << "RFP #" << ++number << endl;
		cout << best_proprosal  << endl;
		best_value = -1;
		best_price = 0.0;
		best_proprosal = "";
	}
}
