#include <iostream> // lets you use input/output streams (cin, cout)

int main()
{
    std::cout << "Hello, world!\n";
    return 0;
}

/* post-code queries:
- what does int main do?
    * int = function returns an integer back to the
    os when finished
    * main() = the entry point of every c++ program
- why is int main required?
    * by ISO, C++ standard madates that all c++
    programs shall contain a global function
    called 'main', which is the designated
    beginning of execution
- what does std::cout mean?
    * std = standard namespace, which is a collection
    of names for stuff provided by the standard library
    * means = use the standard library's character output stream
- what does return 0 do?
    * ends the main() function, sending the 0 value back
    to the os
    * 0 = program finished successfully
    * any non-zero # = program finished w/ errors
- difference between:
    * compile = transl8s source code (.cpp) into
    object code (.o/.obj)
    * build = compiles all necessary files, then
    links them to an executable
    * clean = delete compiled files and artifacts,
    leaving only source code
    * rebuild = clean + build
    * run/start = execute the built program
- exhausted self-options, how to answer?
    a) ask a search engine
    b) ask an AI
    c) ask StackOverflow
*/