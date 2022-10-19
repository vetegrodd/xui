#include <nana/gui.hpp>

#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/combox.hpp>

int main() {

	using namespace nana;
	form fm;
	label helloLabel{ fm, rectangle{ 10, 10, 100, 20 } };
	helloLabel.bgcolor(colors::blue);
	helloLabel.caption("Hello, world!");
	button bn{ fm, rectangle{ 120, 10, 50, 29 } };
	bn.caption("Press");
	bn.events().click([&helloLabel](const arg_click& arg) { helloLabel.caption("clucked"); });

	combox cb{ fm , rectangle{10, 30, 50, 20} };
	cb.push_back("hej");
	cb.push_back("hopp");
	cb.push_back("ditt");

	fm.show();
	exec();
}