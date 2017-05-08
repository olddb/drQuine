#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv){
argc++;
int i = 5;
if (i>0){
char*ex;
char*file;
if(strcmp(argv[0],"./Sully")){i--;}
asprintf(&ex,"%s%i","Sully_",i);
asprintf(&file,"%s%s",ex,".c");
char*a="#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cint main(int argc, char **argv){%cargc++;%cint i = %i;%cif (i>0){%cchar*ex;%cchar*file;%cif(strcmp(argv[0],%c./Sully%c)){i--;}%casprintf(&ex,%c%cs%ci%c,%cSully_%c,i);%casprintf(&file,%c%cs%cs%c,ex,%c.c%c);%cchar*a=%c%s%c;%cFILE *fd = fopen(file,%cw+%c);%cfprintf(fd,a,10,10,10,10,10,i,10,10,10,10,34,34,10,34,37,37,34,34,34,10,34,37,37,34,34,34,10,34,a,34,10,34,34,10,10,10,10,34,37,37,37,37,37,37,34,34,34,34,34,34,34,10,10);%cfclose(fd);%cchar*cmd;%casprintf(&cmd,%c%cs%cs%cs%cs%cs%cs%c,%cgcc %c,file,%c -o %c,ex,%c; ./%c,ex);%csystem(cmd);}return (0);}%c";
FILE *fd = fopen(file,"w+");
fprintf(fd,a,10,10,10,10,10,i,10,10,10,10,34,34,10,34,37,37,34,34,34,10,34,37,37,34,34,34,10,34,a,34,10,34,34,10,10,10,10,34,37,37,37,37,37,37,34,34,34,34,34,34,34,10,10);
fclose(fd);
char*cmd;
asprintf(&cmd,"%s%s%s%s%s%s","gcc ",file," -o ",ex,"; ./",ex);
system(cmd);}return (0);}
