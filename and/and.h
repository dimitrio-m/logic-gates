#ifndef AND_H
#define AND_H

#include<systemc.h>

class And_Gate: public sc_module {

	public:

		sc_in<bool> a_in, b_in;
		sc_out<bool> z_out;

		SC_CTOR(And_Gate){
			SC_METHOD(operation)
				sensitive << a_in << b_in;
		}

	private:

		void operation(){
			z_out.write( a_in.read() and b_in.read() );
		}
};


#endif
