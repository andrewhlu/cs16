//Char array or array of chars
char arr[] = {'J','i','l','l'};

//C-string
char arr2[] = {'J','i','l','l','\0'};
char arr3[] = "Jill"; //automatically inserts 0 char at end

//The C++ string class methods
string fruit = "Apple";
int len = fruit.length(); //5
int pos = fruit.find('l'); //3
string part = fruit.substr(1,3); //"ppl"
fruit.erase(2,3); //remove 3 characters starting at position 2, "Ap"
fruit.insert(2, "ricot"); //"Apricot"
friot.replace(2,5,"ple"); //"Apple"

//Check out cctype for checks and conversions on characters
fruit[0].tolower(fruit[0]);
isalpha(fruit[0]); //Checks for a-z, not case sensitive
isalnum(fruit[0]); //Checks for a-z and 0-9, not case sensitive