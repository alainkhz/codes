//uva10858
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void dfs(int n, int divisor, vector<vector<int> > &ans, vector<int> &comb){

  
    int bound = sqrt(double(n));

    for (int i = divisor; i <= bound; i ++){
        if (n % i == 0){
            comb.push_back(i);
            dfs(n / i, i, ans, comb);
            comb.pop_back();
        }
    }
    comb.push_back(n);
    ans.push_back(comb);
    comb.pop_back();

}

int main() {
	int n;
    while (cin >> n && n != 0){

        vector<vector<int> > ans;
        vector<int> comb;
        

        dfs(n, 2, ans, comb);
        ans.pop_back();

        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++){
            cout << ans[i][0];
            for (int j = 1; j < ans[i].size(); j++){
                cout << " " << ans[i][j];
            }
            cout << "\n";
        }

    }
}