#include <iostream>
#include <list>
#include <ncurses.h>
#include <cstring>
#include "quest.h"
#include <math.h>
using namespace std;

// Utility functions.

const char * space = "\n";

double cosit(string s) {
  double a = 0;
  std::string::size_type sz;
  a = std::stod (s,&sz);
  a = cos(a);
  return a;
}


void printWithSpace(string s) {
  printw(strcat(convert(s),space));
}

char * convert(string input){
  char * x = new char[input.length()+1];
  std::strcpy(x,input.c_str());
  return x;
}




std::string getstring()
{
  std::string input;

  // let the terminal do the line editing
  nocbreak();
  echo();

  // this reads from buffer after <ENTER>, not "raw"
  // so any backspacing etc. has already been taken care of
  int ch = getch();

  while ( ch != '\n' )
    {
      input.push_back( ch );
      ch = getch();
    }

  // restore your cbreak / echo settings here

  return input;
}

