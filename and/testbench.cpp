#include"testbench.h"

TestBench::TestBench(sc_module_name nm):sc_module(nm){

	SC_THREAD(test);
		sensitive << clk_in.pos();

}

TestBench::~TestBench(){}

void TestBench::test(){

	cout << "\n\t \ta  b | c\n";

	for(int i = 0; i < 2 ; ++i)
		for(int j = 0; j < 2 ; ++j){

			a_out.write(i);
			b_out.write(j);

			wait();

			cout << "\t \t" << a_out.read() << "  " << b_out.read() << " | " << z_in.read() << endl;

		}

	sc_stop();
}
