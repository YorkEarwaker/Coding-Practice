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
bool accept2();
bool accept3();

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
  // print the numeric value of boolean returned
  std::printf("accept %i\n", accept()); 
  std::printf("accept2 %i\n", accept2());
  std::printf("accept3 %i\n", accept3());
  return 0;
}

/*
** 2.3 Procedural Programming
*/

/*
** 2.3.2 Tests and loops
*/

bool accept()
{
  std::cout << "Do you want to proceed (y or n) ?\n";  // write question
  
  char answer = 0;                                
  std::cin >> answer;                                  // read answer
  
  if (answer == 'y') return true;                   
  return false;                                   
}

bool accept2()
{
  std::cout << "Do you want to proceed (y or n) ?\n";  // write question
  
  char answer = 0;
  std::cin >> answer;                                  // read answer
  
  switch(answer) {
  case 'y':
    return true;
  case 'n':
    return false;
  default:
    std::cout << "I'll take that for a no. \n";
    return false;
  }
}

bool accept3()
{
  int tries = 1;
  while (tries < 4 ) {
    std::cout << "Do you want to proceed (y or n) ?\n";  // write question
    char answer = 0;
    std::cin >> answer;                                  // read answer
    
    switch(answer) {
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      std::cout << "Sorry, I don't understand that . \n";
      tries = tries +1;
    }
  }
  std::cout << "I'll take that for a no. \n";
  return false;
}


