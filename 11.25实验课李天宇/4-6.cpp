#include<iostream>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		char ch = tolower(s[i]);
		counts[ch - 'a']++;
	}
	for (int j = 0; j < 26; j++) {
		if (counts[j] != 0)
		{
			cout << static_cast<char>('a' + j) << ":" << counts[j] << " times" << endl;
		}
	}

}
char s[100];
int counts[26] = { 0 };
int main()
{
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s, counts);
	return 0;
}