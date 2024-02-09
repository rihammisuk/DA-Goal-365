#include <bits/stdc++.h>
using namespace std;

int cutRope(int n, int a, int b, int c) {
    // Base cases
    if (n == 0) return 0;
    if (n < 0) return -1;
    // Try all possible cuts and find the maximum result
    int res = max({cutRope(n - a, a, b, c), cutRope(n - b, a, b, c), cutRope(n - c, a, b, c)});
    // If it's not possible to make any further cuts, return -1
    if (res == -1) return -1;

    // Add 1 to the maximum result to account for the current cut being made
    return res + 1;
}

int main() {
    int n = 23; // Length of the rope
    int a = 11, b = 9, c = 12; // Lengths of cuts

    int max_pieces = cutRope(n, a, b, c);
    if (max_pieces == -1) {
        cout << "It's not possible to cut the rope into desired lengths." << endl;
    } else {
        cout << "Maximum number of pieces: " << max_pieces << endl;
    }

    return 0;
}
