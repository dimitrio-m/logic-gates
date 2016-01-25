#include"nand.h"
#include"testbench.h"

int sc_main(int argc, char* argv[]){

	sc_time PERIOD(10,SC_NS); // NS, SEC, SC
	sc_time DELAY(10,SC_NS);
	sc_clock clock("clock", PERIOD, 0.5, DELAY, true);

	Nand_Gate nand1("nand1");
	TestBench tb("tb");

	sc_signal<bool> a_sg, b_sg, z_sg;

	nand1.a_in(a_sg);
	nand1.b_in(b_sg);
	nand1.c_out(z_sg);

	tb.clk_in(clock);

	tb.a_out(a_sg);
	tb.b_out(b_sg);
	tb.z_in(z_sg);

	sc_start();

	return 0;
}
