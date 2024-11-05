#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> calculateFallTimes(int N, int A[]) {
    vector<vector<int>> children(N);
    for (int i = 0; i < N; ++i) {
        if (A[i] != -1) {
            children[A[i]].push_back(i);
        }
    }

    vector<int> fallTime(N, 0);
    queue<int> q;

    for (int i = 0; i < N; ++i) {
        if (children[i].empty()) {
            q.push(i);
        }
    }

    int time = 1;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            int node = q.front();
            q.pop();
            fallTime[node] = time;

            int parentNode = A[node];
            if (parentNode != -1) {
                bool isLeaf = true;
                for (int child : children[parentNode]) {
                    if (fallTime[child] == 0) {
                        isLeaf = false;
                        break;
                    }
                }
                if (isLeaf) {
                    q.push(parentNode);
                }
            }
        }
        time++;
    }

    return fallTime;
}

vector<int> mangoFall(int N, int Q, int A[], int T[]) {
    vector<int> fallTime = calculateFallTimes(N, A);
    vector<int> results(Q, 0);

    for (int q = 0; q < Q; ++q) {
        for (int i = 0; i < N; ++i) {
            if (fallTime[i] == T[q]) {
                results[q]++;
            }
        }
    }

    return results;
}

int main() {
    int N = 6;
    int Q = 2;
    int A[] = {0, 0, 0, 1, 2, 2};
    int T[] = {2, 3};

    vector<int> results = mangoFall(N, Q, A, T);

    for (int i = 0; i < Q; ++i) {
        cout << "Number of mangoes falling at time " << T[i] << ": " << results[i] << endl;
    }

    return 0;
}
