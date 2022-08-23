#include <nana/gui.hpp>

#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>

int main() {

	using namespace nana;
	form fm;
	label lb{ fm, rectangle{ 10, 10, 100, 20 } };
	lb.bgcolor(colors::blue);
	lb.caption("Hello, world!");
	button bn{ fm, rectangle{ 120, 10, 50, 29 } };
	bn.caption("Press");
	bn.events().click([&lb](const arg_click& arg) { lb.caption("clucked"); });
	fm.show();
	exec();
}