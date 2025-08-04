#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> largestSum(vector<vector<int>>& matrix, int n, int m){

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += matrix[i][j];
        }

        cout << "Sum of rows : " << sum << endl;

        if(maxi < sum){
            maxi = sum;
            rowIndex = i;
        }
    }

    cout << "Maximum sum is " << maxi << " at index " << rowIndex << endl;

    return matrix[rowIndex];
}

int main(){

    cout << "Enter number of rows and column : ";
    int n;
    int m;

    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter elements : " << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> result = largestSum(matrix, n, m);

    for(int val : result){
        cout << val << " " ;
    }
    cout << endl;


    return 0;
}