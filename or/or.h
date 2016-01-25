#ifndef OR_H
#define OR_H

#include<systemc.h>

class Or_Gate : public sc_module {

public:
  sc_in<bool> a_in, b_in;
  sc_out<bool> z_out;

  SC_CTOR(Or_Gate){
    SC_METHOD(operation){
      sensitive << a_in << b_in;
    }
  }

private:
  void operation(){
    z_out.write( a_in.read() or b_in.read() );
  }
};

#endif
