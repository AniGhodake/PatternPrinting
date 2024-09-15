#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
    for(int row=0; row<n; row=row+1) {
		//space
		for(int col=0; col<n-row-1; col=col+1) {
			cout <<" ";
		}
		//stars
		for(int col=0; col<row+1; col=col+1) {
			//print star for first and last col
			if(col ==0 || col == row + 1 - 1 ) {
				cout << "* ";                                 // HOLLOW FULL PYRAMID
			}
			else {
				//for every col between first and last
				//column, print spaces
				cout << "  ";
			}
			
		}
		cout << endl;
	}
}