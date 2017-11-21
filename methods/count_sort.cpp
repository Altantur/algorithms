#include <iostream>

using namespace std;

int main(){
    int n, min, max;
    cin >> n;

    int a[n];
    cin >> a[0];

    min = a[0];
    max = a[0];
    for (int i = 1; i < n; i ++){
        cin >> a[i];
        if (min > a[i]){
            min = a[i];
        }
        if (max < a[i]){
            max = a[i];
        }
    }
    int size = max - min + 1;
    int b[size];
    memset(b, 0, sizeof(b));

    for (int i = 0; i < n; i ++){
        b[a[i] - min] ++;
    }

    for (int i = 0; i < size; i ++){
        for(int j = b[i]; j > 0; j --){
            cout << i + min << " ";
        }
    }

    cout << endl;
    return 0;
}
