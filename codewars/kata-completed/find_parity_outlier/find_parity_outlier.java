//import java.lang.Math;

public class FindOutlier {
    static int find(int[] integers) {
      
      // get the first three values of a list/array of minimum length of three items
      int firstVal = integers[0];
      int secondVal = integers[1];
      int thirdVal = integers[2];
      int even_count = 0;
      int return_val = 0;
      boolean even_list = false;
      
      // check first bit value in number
      // if the first bit is 0 the number is even
      if ((firstVal & 1) == 0) { 
        //even_count =+ even_count + 1
        even_count ++;
      } 
      
      if ((secondVal & 1) == 0) { 
        //even_count =+ even_count + 1;
        even_count ++;
      }
      // is this one just redundant? probs
       if ((thirdVal & 1) == 0) { 
        //even_count =+ even_count + 1;
        even_count ++;
      } 
      
      /*
      System.out.print("event count " + even_count + "\n"); // debug
      System.out.print("first val " + firstVal + "\n"); // debug
      System.out.print("second val " + secondVal + "\n"); // debug
      System.out.print("thrid val " + thirdVal + "\n"); // debug
      System.out.print("list length " + integers.length + "\n"); // debug
      */
      
      // the number of items needed to iterate over in the list.
      int n = 0;
      
      // list is even and we do have an odd return value to find from the first three items
      if (even_count == 2) {
        even_list = true;
        n = 3;
      // list is odd and we do have an even return value to find from the first three items
      } else if (even_count == 1) {
        even_list = false;
        n = 3;
      // list is odd and we don't have a return value
      } else if (even_count == 0) { // redundant comment out?
       //even_list = false; // redundant already set as default
       //System.out.print("third if else " + even_list + "\n"); // debug, is this ever called, yes!
        n = integers.length;
      } else { // we must itterate across the entire list
        even_list = true;
        n = integers.length;
        //System.out.print("last else " + even_list + "\n"); // debug, is this ever called, yes!
      }
      
      for (int i = 0; i < n; i++) {
        // the list is even check for odd number to return
        if (even_list && ((integers[i] & 1) != 0)) {
          return_val = integers[i];
          
        // the list is odd check for even number to return
        } else if (!even_list && ((integers[i] & 1) == 0)) {
          return_val = integers[i];
        }
      }
      
      // System.out.print("return value " + return_val + "\n"); // debug
      
      return return_val;
    }
  }