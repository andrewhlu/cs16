#include "strFuncs.h"
#include "tddFuncs.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

//Test Cases
//1 - Is Anagram
//2 - Is Palindrome

int main(int argc, char* argv[]) {
	if(argc < 2) {
    std::cerr << "Usage: " << argv[0] << " [num of test to run]" << std::endl;
    return 1;
	}
	else {
    int testNum = atoi(argv[1]);
    if (testNum == 1) {
			START_TEST_GROUP("IS_ANAGRAM");

			string s1 = "UCSB";
			string s2 = "cubs";
			ASSERT_TRUE(isAnagram(s1, s2));

			string s3 = "qwertyuiopasdfghjklzxcvbnm";
			string s4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			ASSERT_TRUE(isAnagram(s3, s4));

			string s5 = "andrewlu";
			string s6 = "Lu, Andrew";
			ASSERT_TRUE(isAnagram(s5, s6));

			string s7 = "yes";
			string s8 = "no";
			ASSERT_FALSE(isAnagram(s7, s8));

			string s9 = "I love to code";
			string s10 = "I love to debug";
			ASSERT_FALSE(isAnagram(s9, s10));
		}
	else if(testNum == 2) {
		START_TEST_GROUP("IS_PALINDROME");

		string s1 = "racedcar";
		ASSERT_FALSE(isPalindrome(s1));

		string s2 = "Hannah";
		ASSERT_TRUE(isPalindrome(s2));

		string s3 = "ASDFGHJKLlkjhgfdsa";
		ASSERT_TRUE(isPalindrome(s3));

		string s4 = "Tacocat";
		ASSERT_TRUE(isPalindrome(s4));

		string s5 = "Andrea";
		ASSERT_FALSE(isPalindrome(s5));
	}
}
}
