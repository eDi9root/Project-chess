#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include <string>

using std::string;
using std::vector;


class Board: public subject {
  public:
    static const int ROWS = 8;
    static const int COLS = 8;
  private:
    vector<vector<Square>> board;
    vector<move> moved;
  public:
    Board();
    ~Board();
    void init();
    
};

#endif
