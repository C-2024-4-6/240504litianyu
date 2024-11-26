#include <iostream>
#include <vector>
#include <string>

//kmp�㷨
// ��������ƥ���lps���飩
void computeLPSArray(const std::string& pattern, std::vector<int>& lps) {
    int M = pattern.length();
    int len = 0;  // lps[0]ʼ��Ϊ0
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

// ʹ�ò���ƥ�������ַ���ƥ��
void KMPSearch(const std::string& pattern, const std::string& text) {
    int M = pattern.length();
    int N = text.length();

    std::vector<int> lps(M, 0);  // ʹ�� std::vector
    computeLPSArray(pattern, lps);

    int j = 0;  // ģʽ�е�����
    bool found = false;
    for (int i = 0; i < N;) {
        if (pattern[j] == text[i]) {
            j++;
            i++;
        }

        if (j == M) {
            std::cout << "�ҵ�ģʽ����ʼλ��Ϊ: " << i - j << std::endl;
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
        std::cout << "��ʼλ��Ϊ-1";
    }
}
using namespace std;
int main() {
    string text, pattern;
    cout << "ĸ����";
    getline(cin, text);
    cout << "�Ӵ���";
    getline(cin, pattern);

    KMPSearch(pattern, text);

    return 0;
}