#include <stdio.h>

// define the person struct here using the typedef syntax
typedef struct {
    char * name;
    int age;
} person;
// else struct can be used but its a bit annoying because you have to use struct every time to define a class. 
/* struct person{ 
	char * name;
	int age;
}
*/

int main() {
    person john; //struct person john should have been used if latter syntax was used before

    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);
}
