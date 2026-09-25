#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 求最大值
int getMax(int a[4]) {
    int max_val = a[0];
    for (int i = 1; i < 4; i++) {
        if (a[i] > max_val) max_val = a[i];
    }
    return max_val;
}

// 求最小值
int getMin(int a[4]) {
    int min_val = a[0];
    for (int i = 1; i < 4; i++) {
        if (a[i] < min_val) min_val = a[i];
    }
    return min_val;
}

// 求最大值出现的次数（传入已经算好的最大值，避免重复计算）
int getMaxCount(int a[4], int max_val) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] == max_val) cnt++;
    }
    return cnt;
}

// 求最小值出现的次数
int getMinCount(int a[4], int min_val) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] == min_val) cnt++;
    }
    return cnt;
}

int main() {
    int T;
    cin >> T;
    vector<string> s(4);

    while (T--) {
        cin >> s[0] >> s[1] >> s[2] >> s[3];

        int len[4];
        for (int i = 0; i < 4; i++) {
            len[i] = s[i].length();
        }

        // 计算最大、最小长度
        int max_val = getMax(len);
        int min_val = getMin(len);

        // 计算最大、最小长度出现的次数
        int max_cnt = getMaxCount(len, max_val);
        int min_cnt = getMinCount(len, min_val);

        if (min_cnt == 1 && max_cnt > 1) {
            // 三长一短：最短的唯一，最长的不唯一 -> 选最短
            for (int i = 0; i < 4; i++) {
                if (len[i] == min_val) {
                    cout << (char)('A' + i) << endl;
                    break;
                }
            }
        } else if (max_cnt == 1 && min_cnt > 1) {
            // 三短一长：最长的唯一，最短的不唯一 -> 选最长
            for (int i = 0; i < 4; i++) {
                if (len[i] == max_val) {
                    cout << (char)('A' + i) << endl;
                    break;
                }
            }
        } else {
            // 参差不齐 -> 选C
            cout << 'C' << endl;
        }
    }

    return 0;
}