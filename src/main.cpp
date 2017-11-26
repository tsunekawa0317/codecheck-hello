#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  for (int i = 1; i < argc; i++) {
    if((argv[1]=="World") ||(argv[1]=="織田信長") || (argv[1]=="codecheck")){
      printf("Hello %s!",argv[1]);
    }
    else if(argv[1]==NULL){
      printf("Hello!");
    }
    printf ("argv[%i]: %s\n", i, argv[i]);
  }
  return 0;
}
