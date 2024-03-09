#include <stdio.h>
#include<stdlib.h> 
FILE *stream;
typedef struct{
    char name[10];
    char type[10];
}test_struct;
void main( void )
{
    int i = 10;
    double fp = 1.5;
    char s[] = "this is a string";
    char c = '\n';
    test_struct test1_struct[10];
    test1_struct[1].name[0] = 'T';
    test1_struct[1].type[0] = 'M';
    stream = fopen( "fprintf.txt", "a+" );
    fprintf( stream, "%c%c", test1_struct[1].name, test1_struct[1].type );

    // fprintf( stream, "%d\n", i );
    // fprintf( stream, "%f\n", fp );
    fclose( stream );
    //system( "type fprintf.out" );
}