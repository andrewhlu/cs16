#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	int arr1[26] = {0};
	int arr2[26] = {0};

	//Create alphabet array for two strings
	alphaCount(arr1, s1);
	alphaCount(arr2, s2);

	//See if two strings match
	return isAlphaArrayEqual(arr1, arr2, 26);
}

void alphaCount(int* arr, string s) {
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	for(int i = 0; i <= s.length(); i++) {
		s[i] = tolower(s[i]);
		for(int j = 0; j < 26; j++) {
			if(s[i] == alphabet[j]) {
				arr[j]++;
			}
		}
	}
}

bool isAlphaArrayEqual(int* arr1, int* arr2, int len) {
	if(len == 0) {
		return true;
	}
	else if(arr1[len-1] != arr2[len-1]) {
		return false;
	}
	else {
		isAlphaArrayEqual(arr1, arr2, len-1);
	}
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
	int len = s1.length();
	cout << len << " " << s1 << endl;
	if(len == 1 || len == 0) {
		return true;
	}

	cout << (tolower(s1[0]) != tolower(s1[len-1])) << endl;

	if(tolower(s1[0]) != tolower(s1[len-1])) {
		return false;
	}
  else {
  	isPalindrome(s1.substr(1,len-2));
  }
}

//Custom main function
int main() {
	string s1 = "one plus twelve";
	string s2 = "TwoPlusEleven";

	cout << "Are strings anagrams? " << isAnagram(s1,s2) << endl;

	string s3 = "racedcar";

	if(isPalindrome(s3)) {
		cout << "Is string palindrome? yes" << endl;
	}
	else {
		cout << "Is string palindrome? no" << endl;
	}

	cout << "Is string palindrome? " << isPalindrome(s3) << endl;
	return 0;
}