//167. leetcode two sum - II

#include <iostream>
#include <vector>
using namespace std;

vector<int> twosum(vector<int>& a, int target) {
    vector<int> ans;
    int i = 0;
    int j = a.size() - 1;

    while (i <= j) {
        int sum = a[i] + a[j];
        if (sum == target) {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
            return ans;
        }
        else if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return ans; 
}

int main() {
    vector<int> a = {2, 7, 11, 15};

    int t;
    cout << "Enter target: ";
    cin >> t;

    vector<int> result = twosum(a, t);

    if (!result.empty()) {
        cout << "Indices: ";
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
