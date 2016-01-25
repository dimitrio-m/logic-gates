#ifndef NOT_H
#define NOT_H

#include<systemc.h>

class Not_Gate : public sc_module {

public:

  sc_in<bool> a_in;
  sc_out<bool> z_out;

  SC_CTOR(Not_Gate){
    SC_METHOD(operation){
      sensitive << a_in;
    }
  }

private:

  void operation(){
    z_out.write(!a_in.read());
  }

};

#endif
