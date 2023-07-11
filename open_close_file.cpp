// the open of file (function: fopen)
// FILE *fopen (char *name, char*mode)
// example:

// FILE *fp;
//  fp = fopen("d:\\user\\myfile.txt","r");

// if open current return the pointer which point to the file struct,else return nullptr

// FILE *fp;
// fp = fopen ("aa.c","w");
// if (fp == NULL){
//     printf("file open error!\n");
//     exit(0); // close all the file and terminate call
// }
// method      approach                if file does not exist     if file exist
// r:          reading                     error                    normal
// w:          writing                     creat a new file         Original content lost
// a:          appending                   creat a new file         Append after original content
// rb/wb/ab:   binary method
// +:          both writing and reading      error                  normal

// the close of file(function :fclose)

// FILE *fp;
// fp = fopen("a.txt","r");
// fclose(fp);

// if close current return 0 else return -1(EOF)
