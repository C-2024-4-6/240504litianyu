#include <iostream>
#include <vector>
#include <string>

//kmp算法
// 构建部分匹配表（lps数组）
void computeLPSArray(const std::string& pattern, std::vector<int>& lps) {
    int M = pattern.length();
    int len = 0;  // lps[0]始终为0
    lps[0] = 0;
    int i = 1;

    while (i < M) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// 使用部分匹配表进行字符串匹配
void KMPSearch(const std::string& pattern, const std::string& text) {
    int M = pattern.length();
    int N = text.length();

    std::vector<int> lps(M, 0);  // 使用 std::vector
    computeLPSArray(pattern, lps);

    int j = 0;  // 模式中的索引
    bool found = false;
    for (int i = 0; i < N;) {
        if (pattern[j] == text[i]) {
            j++;
            i++;
        }

        if (j == M) {
            std::cout << "找到模式，起始位置为: " << i - j << std::endl;
            j = lps[j - 1];
        }
        else if (i < N && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
                found = true;
            }

            else
            {
                i = i + 1;
            }
        }

    }
    if (!found)
    {
        std::cout << "初始位置为-1";
    }
}
using namespace std;
int main() {
    string text, pattern;
    cout << "母串：";
    getline(cin, text);
    cout << "子串：";
    getline(cin, pattern);

    KMPSearch(pattern, text);

    return 0;
}