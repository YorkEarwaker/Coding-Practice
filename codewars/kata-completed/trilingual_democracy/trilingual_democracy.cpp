#include <algorithm>
#include <iterator>
#include <string>
#include <set>
#include <vector>


// input is a string of three chars from the set
// 'D', 'F', 'I', 'K'; output is a single char from this set
char trilingual_democracy(const std::string& group) {
  // implement the rules...
  
  char result = '-'; // default minus -, else the result char representing language chosen
  const std::string& permitted_chars_group = "DFIK"; // declare variable, initialise legal input values
  
  std::set<char> group_item_set; // a set of input items
  std::set<char> permitted_chars_set; // a set of permitted items
  
  std::vector<char> test_vect; // used in rule senarios 2 and 3 for different purposes
  
  // allocate individual letters in group input to set
  for (char c : group) {
    group_item_set.insert(c); 
    //std::cout << c << " "; // debug
  }
  //std::cout << std::endl; // debug
  //std::cout << "contains " << group_item_set.size() << " elements" << std::endl; // debug
  
  if (group_item_set.size() >= 2) { // 2 or 3, otherwise not needed, so not for 1
    
    // instantiate the permitted chars set with the entire set of four input letters
    for (char c : permitted_chars_group) {
      permitted_chars_set.insert(c);
      //std::cout << c << " "; // debug
    }
    //std::cout << std::endl; // debug
    //std::cout << "contains " << permitted_chars_set.size() << " elements" << std::endl; // debug
    
    if (group_item_set.size() == 2) { // for rule 2 only initialize the test_vect vector
      
      int i = 0;
      for (char c : group) {
        
          test_vect.insert(test_vect.begin() + i, c); // used in rule senarios 2 for this instantiation
          ++i;
          //std::cout << c << " "; // debug
      }
      //std::cout << std::endl; // debug
      //std::cout << "r2 vect contains " << test_vect.size() << " elements" << std::endl; // debug
    }
  
  }
  
  // rule 1 - all three are native speakers of the same language
  // when all the letters passed in group input were the same
  // the set allocation permits only one unique value and not the other duplicates
  // so in the scenario group was 'FFF' the set contains only a single F element
  if (group_item_set.size() == 1) {
    auto iter = group_item_set.begin();
    // dereference the iterator with * to gets the elements value
    // returns a reference to the element stored at the iterator postion in the set
    result = *iter; 
    //std::cout << "iterator dereferenced value " << result << std::endl; // debug
  } 
  // Rule 3 - use the remaining of the four official languages
  // The input group had three distinct values
  else if (group_item_set.size() == 3) {
    
    // algorithem methods, set_difference
    // first1, last1	-	the range of elements to examine
    // first2, last2	-	the range of elements to search for
    // d_first	-	the beginning of the output range
    std::set_difference(permitted_chars_set.begin(), permitted_chars_set.end(), // these must be first
                        group_item_set.begin(), group_item_set.end(), // these must be second
                        //std::inserter(test_vect, test_vect.begin())); //  this works
                        std::back_inserter(test_vect)); // this works
  
    for (auto it = test_vect.begin(); it != test_vect.end(); ++it) {
      result = *it;
    //for (char c : test_vect) { //range not working for C++ 17
      //std::cout << c << " "; // debug // range not working for C++ 17
      //std::cout << result << " "; // debug
    }
    //std::cout << std::endl; // debug
    //std::cout << "r3 vect contains " << test_vect.size() << " elements" << std::endl; // debug
  } 
  // Rule 2 - converse in the minority language
  // 
  else if (group_item_set.size() == 2) { // there are only 2 items in the input group set
    
    char element_val; // the variable to assign to the value of set item element
    
    // iterate though the 2 items in the set 
    for (auto it = group_item_set.begin(); it != group_item_set.end(); ++it) {
      
      element_val = *it; // dereference the set iterator to get the set element value
      
      // use algorithem method count
      // count the number of items in the vector which contains all the input group letters
      // that is the vector elements that are the same value as the element set value
      // when the count equals 1, we have found the minority langugage
      if (std::count(test_vect.begin(), test_vect.end(), element_val) == 1) {
        result = element_val;
      }
    }
  } 
  
  /*
    Rule 1
    When all three are native speakers of the same language, 
    it also becomes their group's language.5a

    Rule 2
    When two are native speakers of the same language, 
    but the third person speaks a different language, 
    all three will converse in the minority language.5b

    Rule 3
    When native speakers of three different languages meet, 
    they eschew these three languages and instead use 
    the remaining of the four official languages.5c
  */
  
  //std::cout << "the result " << result << " returned" << std::endl;
  return result;
}