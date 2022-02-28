#include <iostream>
using namespace std;
int main() {
  int i;   //O(1)
  int N;  //O(1)
  int j;  //O(1)
  int sum = 0;  //O(1)
  for (i = 0; i < N; i++) {  //O(n)

    for (j = N; j > i; j--) {  //O(N)
        sum = sum + i + j;    //beacause it's nested for loop time complexity will be O(N.N)
      }
    }
  cout << sum << '\n';
	return 0;
}