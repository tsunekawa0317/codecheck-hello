#include <iostream>
#include <stdio.h>
//using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  //printf("How many characters did you input?");
  scanf("%d",&argc);

  //printf("Enter a word, prefering 'World', '織田信長', or 'codecheck'.");
  for(int i=1;i<argc+1;i++){
    scanf("%s",&argv[i]);
  }
  if((argv[1]=="W") && (argv[2]=="o") && (argv[3]=="r") && (argv[4]=="l") && (argv[5]=="d")){
    printf("Hello ");
    for(int i=1;i<argc+1;i++){
      printf("%s",argv[i]);
    }
    printf("!");
  }
  else if((argv[1]=="織") && (argv[2]=="田") && (argv[3]=="信") && (argv[4]=="長")){
    printf("Hello ");
    for(int i=1;i<argc+1;i++){
      printf("%s",argv[i]);
    }
    printf("!");
  }
  else if((argv[1]=="c") && (argv[2]=="o") && (argv[3]=="d") && (argv[4]=="e") && (argv[5]=="c") && (argv[6]=="h") && (argv[7]=="e") && (argv[8]=="c") && (argv[9]=="k")){
    printf("Hello ");
    for(int i=1;i<argc+1;i++){
      printf("%s",argv[i]);
    }
    printf("!");
  }
  else if(argv[1]==NULL){
    printf("Hello!");
  }
  
  /*for (int i = 1; i < argc+1; i++) {
    if((argv[1]=="W") ||(argv[1]=="織") || (argv[1]=="c")){
      printf("Hello %s!",argv[i]);
    }
    else if(argv[1]==NULL){
      printf("Hello!");
    }
    printf ("argv[%i]: %s\n", i, argv[i]);
  }*/
  return 0;
}
