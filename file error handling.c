#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *file = NULL:/*declared a pointer variable     that will store address of type FILE
	             we initialize the pointer var to NULL*/

    file fopen)("data.txt", "r");/*store the address returned by fopen() int the variable called file*/

    //error handling
    //line 8 will happen successfully if an address is returned

    if(file == NULL){

    printf("Error : file not found\n");//error message
    return 1;//Any non zero return is acceptable for errors
    }
    
    else{
    printf("File open successful!\n");
    }

	return 0;
}