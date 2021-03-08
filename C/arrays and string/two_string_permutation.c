/*
Check if two strings are permutation of each other.
A Permutation of a string is another string that contains 
same characters,only the order of characters can be different.
For example, “abcd” and “dabc” are Permutation of each other.
*/

// C++ function to check whether two strings are 
// Permutations of each other
bool arePermutation(string str1, string str2)
{
	// Create a count array and initialize all
	// values as 0
	int count[NO_OF_CHARS] = {0};
	int i;

  // If both strings are of different length.
	// Removing this condition will make the
	// program fail for strings like "aaca" and
	// "aca"
  if(str1.length() != str2.length())
    return false;
  
	// For each character in input strings, 
	// increment count in the corresponding 
	// count array
	for (i = 0; str1[i] && str2[i]; i++)
	{
		count[str1[i]]++;
		count[str2[i]]--;
	}

	// See if there is any non-zero value in 
	// count array
	for (i = 0; i < NO_OF_CHARS; i++)
		if (count[i])
			return false;
	return true;
}
