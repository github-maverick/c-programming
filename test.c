#include <stdio.h>
#include <conio.h>
int main( )
{
//differenece between getch(), getche() and getchar()
char ch ;
printf ("\nPress any key to continue") ;
getch() ; //will not echo the character
printf ("\nType any character") ;
ch = getche( ) ; //will echo the character typed
printf("\nType any character") ;
getchar() ; // will echo character, must be followed by enter key

//difference between scanf() and gets()
char name[10];
printf("\nEnter name ") ;
scanf("%s",name); //will only take one word as input
printf("%s",name);
char footballer[40] ;
puts ("Enter name");
gets(footballer); //will take multi-word comment

//difference between puts() and printf()
puts(footballer); //simpler syntax and have to define the variable type in syntax
printf("%s",name);

}
