#include <iostream>
#include <list>
#include <ncurses.h>
#include <cstring>
#include "quest.h"



using namespace std;

int main() {

  list <string> SS;
  SS.push_back("test1");
  SS.push_back("test2");

  string input="";
  initscr();
  printw("Hello World\n");
  printw("please enter some txt: ");

  input = getstring();
  printWithSpace( "\nYou entered:\n\n" +  input);
  for (auto& s : SS) {
    printWithSpace(s);
  }
  refresh();
  getch();
  endwin();

}
