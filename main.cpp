#include <iostream>
#include <list>
#include <stdlib.h>
#include <ncurses.h>
#include <math.h>
#include <cstring>
#include "quest.h"

//DUMMY TEST PROGRAME FOR KEVIN

using namespace std;

int main() {

  list <string> SS;
  
  // Playing around with pointers.
  string input="";
  string *ip;
  ip = &input;

  // Playing around with ncurses.
  initscr();
  printw("*** Kevin's Dumb C++ ***\n");
  printw("please enter some txt: ");
  
  input = getstring();
  if (std::string::npos != input.find_first_of("0123456789")) {

    string test =std::to_string(cosit(input));
    printWithSpace( "\nYou entered:\n\n" +  input);
    printWithSpace("\nCosine is " + test);
    for (auto& s : SS) {
      printWithSpace(s);
    }
  }
  else {
    printw("sorry you need to enter a digit :");
    input = getstring();
  }
  refresh();
  cout << &input << endl;
  cout << *ip << endl;
  getch();
  endwin();

}
