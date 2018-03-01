#include <iostream>
#include <ncurses.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#define PORT 3000

// File for rendering a window.

void renderScreen() {

  initscr();
  int nline =40;
  int ncols =40;
  int x=20;
  int y=20;
  // Varible for storing character key.
  int ch;
  WINDOW * win = newwin(nline,ncols,y,x);
  waddch(win,'X' | COLOR_PAIR(2));
  while (ch !=97) {
    //box(win,0,y);
    ch = wgetch(win);
    if (ch == 98) {
      x++;
      y++;
      printw("Left arrow was proessed");
      mvprintw(x,y, "HELLO");
      refresh();
      erase();
      //wrefresh(win);
      
    }
  }
  refresh();
  clear();
  printw("LETS ENTER SOME DATA: ");
  endwin();

}


