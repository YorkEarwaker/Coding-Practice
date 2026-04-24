/*
** Chapter 2, The C++ Programming Language, 
** Some code snippets from same
*/ 

#include <iostream> // cin, cout, printf
// consider import statement instead

/*
** function declarations
*/
int procedural_programming();
bool accept();

/*
** execution entry point
*/
int main ()
{
  procedural_programming();
  return 0;
}

int procedural_programming()
{
  std::printf("accept %i\n", accept()); // print the numeric value of boolean returned
  return 0;
}

/*
** 2.3 Procedural Programming
*/

bool accept()
{
  std::cout << "Do you want to proceed (y or n) ?\n";  // write question
  
  char answer = 0;                                
  std::cin >> answer;                                  // read answer
  
  if (answer == 'y') return true;                   
  return false;                                   
}
