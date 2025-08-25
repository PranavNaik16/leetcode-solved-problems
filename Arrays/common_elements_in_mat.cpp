#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> commonElements( vector<vector<int>>& matrix, int rows, int cols){
    
    vector<int> temp;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            temp.push_back(matrix[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    vector<int> result;
    int count = 1;
    for(int i = 1; i < temp.size(); i++){
        if(temp[i] == temp[i-1]){
            count++;
        }
        else{
            if(count >= rows){
                result.push_back(temp[i-1]);
            }

            count = 1;
        }
    }

    if(count >= rows){
        result.push_back(temp[temp.size() - 1]);
    }

    return result;
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

    cout << "Common Elements : ";
    vector<int> ans = commonElements(matrix, rows, cols);
    for(int val : ans ){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}