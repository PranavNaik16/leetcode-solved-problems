// code studio

#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>>& matrix, int n, int m){

    vector<int> ans;

    int count = 0;
    // even row -> top to bottom
    for(int col = 0; col < m; col++){

        if(col % 2 == 0){
            for(int row = 0; row < n; row++){
                ans.push_back(matrix[row][col]);
            }
        }
        else{
            // odd row -> bottom to top
            for(int row = n-1; row >= 0; row--){
                ans.push_back(matrix[row][col]);
            }
        }   
    }

    return ans;
}

int main() {

    int n, m;
    cout << "Enter rows and column : ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));


    cout << "Enter elements : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix array : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

   vector<int> result = wavePrint(matrix, n, m);

   for(int val : result){
    cout << val << " ";
   }

   cout << endl;
   return 0;
}