#include <iostream>
#include "radixsort.h"

using edu::vcccd::vc::csv15::radixsort;
using std::cout;
using std::endl;

int main (int argc, char *argv[]){
    int array[] = {512, 14, 68, 720, 243, 386, 413, 25, 97, 154};
    radixsort(array, 10);
    cout << array;

}