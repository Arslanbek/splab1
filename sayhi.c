//Fullname: Arslanbek Tynyshov 
//Group: 3EN04B

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char* argv[]){
    int opt;
    int i = 0;
    struct option l_option[] = {{"kazakh", optional_argument, NULL, 'k'}, {"russian", optional_argument, NULL, 'r'}};
    opt = getopt_long(argc, argv, "kr", l_option, &i);
    if(opt != -1){
	switch(opt){
	    case 'k':
		printf("salem\n");
		break;
	    case 'r':
		printf("privet\n");
		break;
	}
    }
    else{
	if(strcmp(argv[0], "./saysalem") == 0){
	    printf("salem\n");
	}
	else if(strcmp(argv[0], "./sayprivet") == 0){
	    printf("privet\n");
	}
	else{
	    printf("hi\n");
	}
    }

    return 0;
}
