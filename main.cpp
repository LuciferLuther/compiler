#include <iostream>
#include "filem/filem.h"
#include "lexical/lexical.h"
#include "parser/parser.h"
#include <fstream>
#include <ostream>
using namespace std;

int main(int argc, char* argv[]){
    filem fm;
    string buffer;
    lexical l;
    parser p;
    if (argc>=2){
        fm.load_file_into_variable(argv[1],buffer);
        fm.filer.open("../lexical.sad");
        l.run(buffer,fm.filer);
        fm.filer.close();
        fm.filer.open("../parsar.sadawi");
        fm.filer<<"sad";
        fm.filer.close();

        
    }
} 