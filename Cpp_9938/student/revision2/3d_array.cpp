#include <iostream>
using namespace std;

int main() {

    int test[3][3][2] = {
                            {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            }, 
                            {
                                {7, 8}, 
                                {9, 10}, 
                                {11, 12}
                            },
                             {
                                {13, 14}, 
                                {15, 16}, 
                                {17, 18}
                            }

                        };

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }

    return 0;
}