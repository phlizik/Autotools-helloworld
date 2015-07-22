#include "hello.hxx"
#include "world.hxx"
#include "config.h" // make configure results available

int main()
{
hello first_word;
world second_word;
std::cout<<PACKAGE_STRING; /* use the preprocessor definitions
from config.h */
first_word.print();
second_word.print();
return 0;
}
