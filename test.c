#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int pid;
	setenv("PROCESS", "INITIAL", 1);
	pid=fork();
	if(pid) setenv("PROCESS", "FORKED", 1);
	if(pid) printf("%s\n", getenv("PROCESS"));
	else printf("child %s\n", getenv("PROCESS")); 
}
