/*
Given a string, determine if the string has all unique characters.
Examples :  
Input : abcd
Output : true
Input : aabbc
Output : false

Approach 2:
We can reduce our space usage by a factor of eight by using a bit vector. We will assume, in the below code,
that the string only uses the lowercase letters a through z. This will allow us to use just a single int.
*/


#include <bits/stdc++.h>
using namespace std;

bool uniqueCharacters(string str)
{

	// Assuming string can have characters
	// a-z, this has 32 bits set to 0
	int checker = 0;

	for (int i = 0; i < str.length(); i++) {

		int bitAtIndex = str[i] - 'a';

		// if that bit is already set in
		// checker, return false
		if ((checker & (1 << bitAtIndex)) > 0) {
			return false;
		}

		// otherwise update and continue by
		// setting that bit in the checker
		checker = checker | (1 << bitAtIndex);
	}

	// no duplicates encountered, return true
	return true;
}

// driver code
int main()
{

	string str = "helloworld";

	if (uniqueCharacters(str)) {
		cout << "The String " << str
			<< " has all unique characters\n";
	}
	else {
		cout << "The String " << str
			<< " has duplicate characters\n";
	}
	return 0;
}

