#include "imagedialog.h"
#include <gtkmm.h>
#include <iostream>

int main (int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "edu.uta.cse1325.imagedialog.v1_0");
    Gtk::Window win;
    ImageDialog dialog{win, "tux.png"};
    dialog.run();
}

