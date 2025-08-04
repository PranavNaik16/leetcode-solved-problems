// 74 leetcode BS on 2D matrix

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int median(vector<vector<int>>& matrix){

    int n = matrix.size(); //rows
    int m = matrix[0].size(); //cols

    vector<int> temp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp.push_back(matrix[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    int start = 0;
    int end = (n*m) - 1;

    int mid = start + (end - start) / 2;
    int element = temp[mid];

    return element;
}   



int main() {
    
    cout << "Enter rows and columns : ";
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Elements in matrix : " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Elements in matrix form : " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    int res = median(matrix);  // ⬅️ Now it returns an int
    cout << "Median: " << res << endl; 

    return 0;
}