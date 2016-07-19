#include "protocols.h"
/*Instruction counter*/
int IC;

/*Data counter*/
int DC;
int parseLine(char* line, int lineNumber);
void printArr(void);


typedef enum{ACTION = 0,INSTRUCTION}Type;
typedef struct{
  char* name;
  Word address;
  int isExternal;
  Type type;

}Symbole;
typedef struct{
  Symbole* array;
  int numberOfSymboles;
  int size;
}Symboles;

typedef struct{
  char* name;
  int numberOfShows;
  Word address;
}Unundentifies;
