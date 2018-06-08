#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
#include "strFuncs.h"
using namespace std;

void alphaCount(int* arr, string s);
bool isAlphaArrayEqual(int* arr1, int* arr2, int len);

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
		return isAlphaArrayEqual(arr1, arr2, len-1);
	}
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(string s1){
	int len = s1.length();
	if(len == 1 || len == 0) {
		return true;
	}
	else if(tolower(s1[0]) != tolower(s1[len-1])) {
		return false;
	}
  else {
  	return isPalindrome(s1.substr(1,len-2));
  }
}