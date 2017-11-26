#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  printf("How many characters did you input?");
  scanf("%d",&argc);

  printf("Enter a word, prefering 'World', '織田信長', or 'codecheck'.");
  for(int i=1;i<argc+1;i++){
    scanf("%s",&argv[i]);
  }
  for (int i = 1; i < argc+1; i++) {
    if((argv[1]=="W") ||(argv[1]=="織") || (argv[1]=="c")){
      printf("Hello %s!",argv[i]);
    }
    else if(argv[1]==NULL){
      printf("Hello!");
    }
    printf ("argv[%i]: %s\n", i, argv[i]);
  }
  return 0;
}
