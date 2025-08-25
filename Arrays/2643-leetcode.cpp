// 2643 - leetcode Row with max 1s

#include<iostream>
#include<vector>
using namespace std;

vector<int> maxOnes(vector<vector<int>>& matrix, int rows, int cols){

    int maxCount= 0;
    int maxRow = 0;

    for(int i = 0; i < rows; i++){
        int count  = 0;
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == 1){
                count++;
            }
        }

        if(count > maxCount){
            maxCount = count;
            maxRow= i;
        }
    }

    return{maxRow, maxCount};
}


int main(){

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

    vector<int> result = maxOnes(matrix, rows, cols);
    cout << "Row with max 1s: " << result[0] << endl;
    cout << "Number of 1s in that row: " << result[1] << endl;


    return 0;
}