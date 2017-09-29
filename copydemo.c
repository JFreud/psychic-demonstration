#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//strcpy: char *strcpy(char *dest, char *src)
//copies string pointed to by src to dest
//this returns a pointer to dest string

void do_str_copy(){
  char *s = "to be copied"; //initialize string
  char dest[100]; //initalize destinations
  char dest2[200];
  strcpy(dest, s);//copies string to dest
  strcpy(dest2, "the other copy");//copies 'the other copy' to dest
  printf("original: %s\ncopy: %s\nother copy: %s\n", s, dest, dest2);

}

//strncpy: char *strncpy(char *dest, char *src, int n)
//copies first n characters pointed to by src to dest
//remainder of dest will be padded with nulls
//returns final copy of copied string


void do_strn_copy() {
  char *s = "to be copied";
  char dest1[200];
  char dest2[400];
  strncpy(dest1, s, 5);//copies first 5 characters to dest 1
  strncpy(dest2, "I love potatoes", 6);//copies 'I love' to dest 2
  printf("original: %s\ncopy: %s\nother copy: %s\n", s, dest1, dest2);


}


int main(){
  do_str_copy();
  do_strn_copy();
}
