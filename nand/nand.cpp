#include "nand.h"

Nand_Gate::Nand_Gate(sc_module_name nm):sc_module(nm)
{
  SC_METHOD(operation);
  sensitive << a_in << b_in;
}

Nand_Gate::~Nand_Gate(){}

void Nand_Gate::operation()
{
  c_out.write( !(a_in.read() && b_in.read()) );
}
