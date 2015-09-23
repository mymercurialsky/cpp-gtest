#include "rando.h"
#include <cmath>
//#include <stdlib.h>
using namespace std;


/**
 * Worry if only one child is smiling or if all children are smiling
**/
bool Rando::shouldWorry(bool childASmile, bool childBSmile, bool childCSmile)
{
	if( childASmile && childBSmile && childCSmile )
		return true;
	else if( childASmile ^ childBSmile ^ childCSmile )
		return true;
	else
		return false;
}
/**
 * Determines if first or second are evenly divisible by the other.
**/
bool Rando::isDivisbleBy(int first, int second)
{
  if (first == 0 && second == 0) throw -1;
  
  if (second == 0) throw -1;
  bool secondDividesFirst = (first % second == 0);
  
  if (first == 0) throw -1;
  bool firstDividesSecond = (second % first == 0);
  
  return (firstDividesSecond || secondDividesFirst);
}

/**
 * Given a number, num, says whether or not that number is prime
 * (that is, only evenly divisible by itself and 1. For the sake
 * of this function, do NOT consider 0 prime)
**/
bool Rando::isPrime(int num)
{
  if (num <= 1) return false;
  
  if (num <= 3) return true;
  
  if (num % 2 == 0) return false;
  
  if (num % 3 == 0) return false;
  
  int ceiling = ceil(sqrt(num));
  
  for (int i = 5; i < ceiling; i += 2){
    
    if (num % i == 0) return false;
    
  }
  
  return true;
}

/**
 * Given two numbers, first and second, return the value of the one
 * that is closest to zero without actually being zero.
**/
int Rando::nearestToZero(int a, int b)
{
  
  if (a == 0) return b;
  if (b == 0) return a;
  
  return (abs(a) < abs(b) ? a : b);
  
}
