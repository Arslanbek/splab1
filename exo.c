//Fullname: Arslanbek Tynyshov 
//Group: 3EN04B

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char* argv[]){
    int opt = getopt(argc, argv, "n:");
    if(opt == -1){
	int i;
	for(i = 1; i < argc; i++){
	    printf("%s ", argv[i]);
	}
	printf("\n");
    }
    else{
	int i;
	for(i = 2; i < argc; i++){
	    printf("%s ", argv[i]);
	}
    }

    return 0;
}
