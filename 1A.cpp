#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    int num_flagstones = ceil((double)n / a) * ceil((double)m / a);
    cout << num_flagstones << endl;

    return 0;
}
