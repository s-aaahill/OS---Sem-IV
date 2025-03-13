#include <iostream>
#include <vector>
using namespace std;

// Function to check if the system is in a safe state
bool isSafe(vector<vector<int>> &need, vector<int> &available, vector<vector<int>> &allocation, int n, int m) {
    vector<int> work = available;
    vector<bool> finish(n, false);
    vector<int> safeSequence;

    // Safety algorithm
    // (Implementation goes here)

    return true; // Return true if safe, false otherwise
}

int main() {
    int n, m;
    cout << "Enter number of processes: ";
    cin >> n;
    cout << "Enter number of resources: ";
    cin >> m;

    vector<vector<int>> allocation(n, vector<int>(m));
    vector<vector<int>> max(n, vector<int>(m));
    vector<int> available(m);

    // Input allocation, max, and available matrices
    // (Input logic goes here)

    // Calculate need matrix
    vector<vector<int>> need(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    // Check if the system is in a safe state
    if (isSafe(need, available, allocation, n, m)) {
        cout << "System is in a safe state." << endl;
    } else {
        cout << "System is not in a safe state." << endl;
    }

    return 0;
}
