#include <iostream>

using std::cout;
using std::cin;

// Homework 5 — Joe Barron
// CIS 5 Week 05 · Rule engine lite

int main() {
  int score = 0;
  cout << "Enter your score (0-100): ";
  cin >> score;
  int attendance = 0;
  cout << "Enter your attendance (0-100): ";
  cin >> attendance;

  // The invalid comes first because technically with int inputs you can enter a number outside the range of 0-100, which would be invalid.
  if (score < 0 || score > 100 || attendance < 0 || attendance > 100) {
	cout << "Invalid input.\n";
	// Edges for && are 70 and 80. The use of >= instead of > is to include the edge values as passing.
  } else if (score >= 70 && attendance >= 80) {
	cout << "Passed.\n";
	// Edges for || are 69, 71 and 79, 81.
  } else if (score >= 70 || attendance >= 80) {
	cout << "Warning - you do not meet one requirement.\n";
  } else {
	cout << "Failed.\n";
  }

  return 0;
}
