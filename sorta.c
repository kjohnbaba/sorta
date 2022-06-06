#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int sorta(const void *a,const void *b) {
    
    return strcmp(*(char* const*)a, *(char* const*)b);
    }

int main(int argc, char *argv[]){
    if(argc == 1){
        return 1;
    } else if(argc == 2){
     int k;  
	for(k=1; k<argc; k++)
		printf("%s\n", argv[k]);
        
    } else{
        
    qsort ( &argv[1], argc - 1, sizeof(char *), sorta);
    int i;
    for(i = 1; i<argc; i++){
        puts(argv[i]);
    }
	return 0;
 }
}



