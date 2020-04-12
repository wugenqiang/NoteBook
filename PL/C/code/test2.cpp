#include <bits/stdc++.h> 
using namespace std;

const int MAX_NUMBER = 1000000 + 10;
int trie[MAX_NUMBER][26] = {0};
int num[MAX_NUMBER] = {0};
int pos = 1;
void InsertTrie(char word[]) {
	int c = 0;
	for (int i = 0; word[i]; i++) {
		int k = word[i] - 'a';
		if (trie[c][k] == 0) {
			trie[c][k] = pos++;
			c = trie[c][k];
			num[c]++;
		}
	}
}
int FindTrie(char word[]) {
	int c = 0;
	for (int i = 0; word[i]; i++) {
		int k  = word[i] - 'a';
		if (trie[c][k] == 0) {
			return 0;
		}		
		c = trie[c][k];	
	} 
	return num[c];
}
int main() {
	char str[15] = {0};
	while (gets(str) && str[0]) {
		InsertTrie(str);
	}
	while (gets(str)) {
		printf("%d\n", FindTrie(str));
	}
	return 0;
}
