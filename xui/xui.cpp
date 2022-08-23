
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
  tgui::GuiSFML gui(window);

  auto editBoxUsername = tgui::EditBox::create();
  editBoxUsername->setSize({ "66.67%", "12.5%" });
  editBoxUsername->setPosition({ "16.67%", "16.67%" });
  editBoxUsername->setDefaultText("Username");
  gui.add(editBoxUsername);

  auto editBoxPassword = tgui::EditBox::copy(editBoxUsername);
  editBoxPassword->setPosition({ "16.67%", "41.6%" });
  editBoxPassword->setPasswordCharacter('*');
  editBoxPassword->setDefaultText("Password");
  gui.add(editBoxPassword);

  auto button = tgui::Button::create("Login");
  button->setSize({ "50%", "16.67%" });
  button->setPosition({ "25%", "70%" });
  gui.add(button);


  button->onPress(login, editBoxUsername, editBoxPassword);


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
