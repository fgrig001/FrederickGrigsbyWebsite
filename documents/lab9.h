#ifndef LAB9_H
#define LAB9_H

// 5 min
// prints a vector of integers
void dispIntVec(const vector<int>&);


// 10 min
// gets a vector of integers from the user
// First, asks for the amount to input
// Next, gets that many integers and puts them into the vector
void getIntVec(vector<int>&);

// 10 min
// generates a vector of count random numbers within a specified range
void genRandIntVec(int upper, int lower, unsigned count, vector<int>&);

// 10 min
// returns the minimum value in a vector of integers
int minIntVec(const vector<int>&);

// 5 min
// returns the maximum value in a vector of integers
int maxIntVec(const vector<int>&);

// 10 min
// returns the average of a vector of integers
double aveIntVec(const vector<int>&);

// 5 min
// prints a vector of characters (like a string)
void dispCharVec(const vector<char>&);

// 15 min
// Gets a single word (up to the space) and puts it into a vector
// Difficulties: cin >> char doesn’t give you spaces… use a string?
// let them know the problem and have them find a way that doesn’t use
// strings. I haven’t looked into it, but I’m sure it’s possible.
void getCharVec(vector<char>&);

// 15 min
// reverse the vector in place  
void revCharVec(vector<char>&);

// 20-∞ min 
// finds a vector of chars in another vector of chars… (like string find)
// returns -1 if it wasn’t found
int findCharVec(const vector<char>& textToSearch, const vector<char>& term);

#endif
