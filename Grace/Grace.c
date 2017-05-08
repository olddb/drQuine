#include <stdio.h>
/*
    Yo !
*/
#define first(fd) char*a="#include <stdio.h>%c/*%c    Yo !%c*/%c#define first(fd) char*a=%c%s%c;fprintf(fd,a,10,10,10,10,34,a,34,10);%c";fprintf(fd,a,10,10,10,10,34,a,34,10);
#define second(fd) char*b="#define second(fd) char*b=%c%s%c;fprintf(fd,b,34,b,34,10);%c";fprintf(fd,b,34,b,34,10);
#define undeclaredMain int main () {FILE *fd = fopen("Grace_kid.c","w+");first(fd);second(fd);char*c="#define undeclaredMain int main () {FILE *fd = fopen(%cGrace_kid.c%c,%cw+%c);first(fd);second(fd);char*c=%c%s%c;fprintf(fd,c,34,34,34,34,34,c,34,10,10);return(0);}%cundeclaredMain%c";fprintf(fd,c,34,34,34,34,34,c,34,10,10);return(0);}
undeclaredMain
