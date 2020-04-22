#include "backend.cpp"
#include "gui.cpp"


int main(){
    // create the gui 
    load_window();
    
    // bind the gui to backend.
    file_menu();
    
    return 0;
}
