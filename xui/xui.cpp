
#include <TGUI/TGUI.hpp>
#include <iostream>

void
login(tgui::EditBox::Ptr username, tgui::EditBox::Ptr password)
{
  std::cout << "Username: " << username->getText().toStdString() << std::endl;
  std::cout << "Password: " << password->getText().toStdString() << std::endl;
}

int
main()
{
  // Create the window
  sf::RenderWindow window(sf::VideoMode(400, 300), "TGUI window");
  tgui::Gui gui(window);

  auto label = tgui::Label::create("hepp");
  try {
    auto tabs = tgui::Tabs::create();
    tabs->setTabHeight(30);
    tabs->setPosition(70, 40);
    tabs->add("Tab - 1");
    tabs->add("Tab - 2");
    tabs->add("Tab - 3");
    gui.add(tabs);
  } catch (const tgui::Exception& e) {
    std::cerr << "TGUI Exception: " << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  // Main loop
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();

      gui.handleEvent(event);
    }

    window.clear();
    gui.draw();
    window.display();
  }

  return EXIT_SUCCESS;
}
