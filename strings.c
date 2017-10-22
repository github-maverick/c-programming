#include <stdio.h>
#include <string.h>
int main() {
  char * first_name="John"; // using pointer "*" notation
      char last_name[]="Doe"; // using local array notation
  char name[9];

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name); // it adds first_name and last_name to name with a space in between
  if (strncmp(name, "John Boe", 8) == 0) {  //syntax: strncmp(string, string, n), where n is the number of chars to be compared. It returns 0 if the two string are same upto n chars
	   printf("Done!\n");
  }
  name[0]='\0'; // remove first element of name
  strncat(name,first_name,4); // appending first_name to name
  strncat(name,last_name,20);  // appendig last_name to name
  printf("%s\n",name);
  return 0;
}
