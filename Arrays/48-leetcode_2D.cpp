// leetcode 48 rotate matrix array - 90 deg

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> rotateNinetyClockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();        // rows
    int m = matrix[0].size();     //cols

    vector<vector<int>> rotated(m, vector<int>(n)); 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    return rotated;
}

int main(){
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter elements in matrix: ";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> rotatedMatrix = rotateNinetyClockwise(matrix);

    cout << "\nRotated Matrix (90 degrees clockwise):\n";
    for(auto row : rotatedMatrix){
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}


// **LEETCODE **//

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {

//         int n = matrix.size();
        
//         for(int i = 0; i < n; i++){
//             for(int j = i+1; j < n; j++){
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }


//         for(int i = 0; i < n; i++){
//             reverse(matrix[i].begin(), matrix[i].end());
//         }

       





//     }
// };