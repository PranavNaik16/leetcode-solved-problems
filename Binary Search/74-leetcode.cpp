// 74 leetcode BS on 2D matrix

#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>>& matrix, int target){

    int n = matrix.size(); // rows
    int m = matrix[0].size(); //cols

    int start = 0;
    int end = (n * m) - 1;

    int mid = start + (end -start) / 2;

    while(start <= end){

        int element = matrix[mid/m][mid%n];

        if(element == target){
            return 1;
        }
        if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end -start) / 2;
    }

    return 0;
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

    
    int target;
    cout << "Enter element to be searched : ";
    cin >> target;
    
    bool found = binarySearch(matrix, target);
    if(found){
        cout << "Element found!" << endl;
    }
    else{
        cout << "Element not found!" << endl;
    }

    return 0;
}