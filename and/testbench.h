#ifndef TESTBENCH_H
#define TESTBENCH_H

#include<systemc.h>
#include<iostream>

using namespace std;

class TestBench: public sc_module {

	public:

		sc_in<bool> z_in, clk_in; //reloj
		sc_out<bool> a_out, b_out;

		SC_CTOR(TestBench);
		~TestBench();

	private:

		void test();

};

#endif
