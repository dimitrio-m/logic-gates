#ifndef XOR_H
#define XOR_H

#include<systemc.h>

class Xor_Gate : public sc_module {

public:

  sc_in<bool> a_in, b_in;
  sc_out<bool> z_out;

  SC_CTOR(Xor_Gate){
    SC_METHOD(operation){
      sensitive << a_in << b_in;
    }
  }

private:

  void operation() {
    z_out.write( a_in.read() xor b_in.read() );
  }

};

#endif
