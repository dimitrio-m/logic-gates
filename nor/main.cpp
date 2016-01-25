#include"nor.h"
#include"testbench.h"

int sc_main(int argc, char* argv[]){

	sc_time PERIOD(10,SC_NS); // NS, SEC, SC
	sc_time DELAY(10,SC_NS);
	sc_clock clock("clock", PERIOD, 0.5, DELAY, true);

	Nor_Gate nor1("nor1");
	TestBench tb("tb");

	sc_signal<bool> a_sg, b_sg, z_sg;

	nor1.a_in(a_sg);
	nor1.b_in(b_sg);
	nor1.z_out(z_sg);

	tb.clk_in(clock);

	tb.a_out(a_sg);
	tb.b_out(b_sg);
	tb.z_in(z_sg);

	sc_start();

	return 0;
}
