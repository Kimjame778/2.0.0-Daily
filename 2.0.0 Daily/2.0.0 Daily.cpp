#include <iostream>
#include <string>

using namespace std;

string line(string sen, string word, string newWord)
{
	return sen.replace(sen.find(word),word.length(),newWord);
}

int main()
{

	string a = "Hello World";
	string b = "World";
	string c = "Sun";

	
	cout << line(a, b, c);
}
