#ifndef nand_H
#define nand_H

#include <systemc.h>

class Nand_Gate : public sc_module
{
public:

  sc_in<bool> a_in, b_in;
  sc_out<bool> c_out;

  SC_CTOR(Nand_Gate);
  ~Nand_Gate();

private:
  void operation();
};

#endif
