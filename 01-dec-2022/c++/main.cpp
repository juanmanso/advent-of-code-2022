#include <fstream>
#include <iostream>

using namespace std;

static istream *iss = 0;	// Input Stream (clase para manejo de los flujos de entrada)
static fstream ifs; // Input File Stream (derivada de la clase ifstream que deriva de istream para el manejo de archivos)

static void
opt_input(string const &arg)
{
  ifs.open(arg.c_str(), ios::in); // c_str(): Returns a pointer to an array that contains a null-terminated
                                  // sequence of characters (i.e., a C-string) representing
                                  // the current value of the string object.
  iss = &ifs;

  // Verify that stream's OK.
  //
  if (!iss->good()) {
    cerr << "cannot open "
         << arg
         << "."
         << endl;
    exit(1);
  }
}

int main () {
  string x;

  opt_input("input");

  // Use overwritten extraction operator and read all strings from the file to the dynamic array
  getline(iss, x);

  /* cin >> x; */
  cout << "Hello World!";
  cout << "\n";
  cout << x;
  cout << endl;
  return 0;
}
