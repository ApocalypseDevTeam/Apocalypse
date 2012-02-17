#include "Apocalypse"

namespace Apocalypse{
void parse_command_line_arguments(int argc, const char* argv[]){
    // TODO Implements somthing
}

/**
 *The main function
 *
 *@param argc number of command line arguments
 *@param argv array of command line arguments
 *@return 0 for all ok, 1 for errors
 **/
int main(int argc, const char* argv[]){
    parse_command_line_arguments(argc, argv);
    Apocalypse *app = new Apocalypse();

    ExitStatus es = *app.getExitStatus();
    delete app;

    return es;
}
}
