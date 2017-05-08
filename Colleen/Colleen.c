#include <stdio.h>
/*
    Comment 1
*/
void useless(){}
int main(){char*a="#include <stdio.h>%c/*%c    Comment 1%c*/%cvoid useless(){}%cint main(){char*a=%c%s%c;%c/*%c    Comment 2%c*/%cprintf(a,10,10,10,10,10,34,a,34,10,10,10,10,10);return(0);}%c";
/*
    Comment 2
*/
printf(a,10,10,10,10,10,34,a,34,10,10,10,10,10);return(0);}
