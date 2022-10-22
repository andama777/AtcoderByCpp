#include <bits/stdc++.h>
using namespace std;

int main(){
    int Rate;
    cin >> Rate;
    int Goal;
    cin >> Goal;
    cout << (Rate + ((Goal - Rate) * 2)) << endl;
    return 0;
}