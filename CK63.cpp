#include<iostream>
using namespace std;

  int main() {
    int a[10];
    int i;
    int min;

    for (i = 0; i < 10; i++) {
    cin>>a[i];
    }
    min = a[0];
    for (i = 0; i < 10; i++) {
if (a[i] < min) {
min = a[i];
    }
    }
   cout<<min;
    return 0;
  }
