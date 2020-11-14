#ifndef __CELL_H__
#define __CELL_H__
#include <iostream>
#include <fstream>
#include <cstdlib>

class Cell
{

    friend std::ostream& operator<<(std::ostream& stream, const Cell& c);
    friend std::istream& operator>>(std::istream& stream, Cell& c);
  public:

    Cell(int x, int y);
    ~Cell();

    void add_neighb(Cell *n1);
    void add_neighb(Cell *n1, Cell *n2);
    void add_neighb(Cell *n1, Cell *n2, Cell *n3);

  //protected:

    int m_x, m_y;
    int m_nb_neighb = 0;
    Cell **m_neighb = NULL;
    bool m_displayed = false;
    bool m_flag = false;
    bool m_written = false;

};

#endif