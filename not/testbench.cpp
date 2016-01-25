#include"testbench.h"

TestBench::TestBench(sc_module_name nm):sc_module(nm){

	SC_THREAD(test);
		sensitive << clk_in.pos();

}

TestBench::~TestBench(){}

void TestBench::test(){

	cout << "\n\t \ta | c\n";

	for(int i = 0; i < 2 ; ++i)
	{

		a_out.write(i);
		wait();

		cout << "\t \t" << a_out.read() << " | " << z_in.read() << endl;

	}

	sc_stop();
}
