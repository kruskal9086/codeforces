#include <iostream>
#include <vector>

using namespace std;

int count_problems(int n, vector<vector<int>> problems) {
    int num_solved = 0;
    for (int i = 0; i < n; i++) {
        int num_sure = 0;
        for (int j = 0; j < 3; j++) {
            num_sure += problems[i][j];
        }
        if (num_sure >= 2) {
            num_solved++;
        }
    }
    return num_solved;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> problems(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        cin >> problems[i][0] >> problems[i][1] >> problems[i][2];
    }

    int num_solved = count_problems(n, problems);
    cout << num_solved << endl;

    return 0;
}
