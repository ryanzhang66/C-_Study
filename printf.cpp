/*打印练习*/

#include <iostream>

using namespace std;

int main()
{
    int i, j, k, f;
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= 30; j++){
            cout << " ";
        }
        for (k = 1; k <= 8-2*i; k++){
            cout << " ";
        }
        for (f = 1; f <= 2*i; f++){ // 打印星号
            cout << "*";
        }
        cout << endl;    // 换行    
    }
    for (i = 1; i <= 3; i++){    // 打印下半部分
        for (j = 1; j <= 30; j++){
            cout << " ";
        }
        for (f = 1; f <= 7-2*i; f++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}