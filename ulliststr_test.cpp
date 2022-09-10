/* Write your test code for the ULListStr in this file */
#include "ulliststr.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
  ULListStr hi;
  // hi.push_back("7");
  // hi.push_front("8");
  // hi.push_back("9");
  
  // cout << hi.get(0) << " " << hi.get(1) << " " << hi.get(2) << endl;
  // cout << hi.size() << endl;
     



      //POP BACK TEST CASES

  // hi.pop_back();              //tests if head is empty - returns nothing, size is still 0
  // cout << hi.size() << endl;

  //   hi.push_back("2");   
  //   hi.push_front("3");        //tests majority case
  //   hi.pop_back();
  //    cout << hi.size() << endl; 
  //    cout << hi.get(0) << endl;    

  //   hi.push_front("7");
  //   hi.pop_back();                  //tests if popback removes an empty list, also throws exception when get ptr is NULL
  //   cout << hi.size() << endl;
  //   cout << hi.get(0) << endl;      




    //POP FRONT TEST CASES

    // hi.pop_front();              //tests if head is empty - returns nothing, size is still 0
    // cout << hi.size() << endl;

    // hi.push_back("2");   
    // hi.push_front("3");        //tests majority case
    // hi.pop_front();
    //  cout << hi.size() << endl; 
    //  cout << hi.get(0) << endl;    

    // hi.push_back("7");
    // hi.pop_front();                  //tests if popback removes an empty list, also throws exception when get ptr is NULL
    // cout << hi.size() << endl;
    // cout << hi.get(0) << endl; 





    //PUSH BACK TEST CASES

    // hi.push_back("5");                //tests if head is empty
    // cout <<hi.size() << endl;
    // cout << hi.get(0) << endl;


    // hi.push_front("5");
    // hi.push_back("6");                              //tests majority case
    // cout << hi.size() << endl;
    // cout<< hi.get(0) << " " << hi.get(1) << endl;


    // hi.push_front("4");
    // hi.push_back("7");
    // cout << hi.size() << endl;                          //tests that since push_front makes first value at 9, makes push back create new item.
    // cout << hi.get(0) << " " << hi.get(1) << endl;




    //PUSH FRONT TEST CASES

    // hi.push_front("8");          //tests if head is empty
    // cout <<hi.size() << endl;
    // cout << hi.get(0) << endl;     //(also tests that getVal works with null ptr)


    // hi.push_back("7");
    // hi.push_front("9");                              //tests majority case
    // cout << hi.size() << endl;
    // cout<< hi.get(0) << " " << hi.get(1) << endl;


    // hi.push_back("2");
    // hi.push_front("5");
    // cout << hi.size() << endl;                          //tests that since push_back makes first value at 0 index, makes push front create new item.
    // cout << hi.get(0) << " " << hi.get(1) << endl;         //(also tests getVal when it has multiple values)




    //FRONT TEST CASE

    // hi.push_back("3");                  //tests that front prints the first item, in this case 1
    // hi.push_back("5");
    // hi.push_front("1");
    // cout << hi.front() << endl;

    


    //BACK TEST CASE

      // hi.push_front("2");                   //tests that back prints the back item, in this case 9
      // hi.push_front("8");
      // hi.push_back("9");
      // cout << hi.back() << endl;


  return 0;
}
