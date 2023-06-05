#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n == 0){
		return 1;
	}

	int count = 0;
	while (n != 0){
		count += 1;
		n = n/10;
	}
	cout << count;
}
