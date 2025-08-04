// 54 - leetcode spiral order

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
    int cols = matrix[0].size();  // number of columns
    int rows = matrix.size();     // number of rows

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    vector<int> ans;

    while(left <= right && top <= bottom){
        for(int i = left; i <= right; i++)
            ans.push_back(matrix[top][i]);
        top++;

        for(int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--)
                ans.push_back(matrix[bottom][i]);
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
    }
    return ans;
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

    cout << "Matrix elements: " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for(int val : result){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
