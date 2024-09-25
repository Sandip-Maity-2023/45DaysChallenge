#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countWinningPlayers(int n, vector<vector<int>>& pick) {
    vector<unordered_map<int, int>> playerPicks(n);
    for (const auto& p : pick) {
        playerPicks[p[0]][p[1]]++;
    }
    
    int winningPlayers = 0;
    for (int i = 0; i < n; ++i) {
        for (const auto& entry : playerPicks[i]) {
            if (entry.second > i) {
                winningPlayers++;
                break;
            }
        }
    }
    return winningPlayers;
}

int main() {
    int n = 5;
    vector<vector<int>> pick = {{0, 1}, {1, 0}, {0, 2}, {1, 2}, {2, 3}};
    cout << "Number of winning players: " << countWinningPlayers(n, pick) << endl;
    return 0;
}
