#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * is_word_present( const char *sentence, const char *word )
{
    const char *p = NULL;
    
    size_t n = strlen( word );
    
    if ( n != 0 )
    {
        p = sentence;
    
        while ( ( p = strstr( p, word ) ) != NULL )
        {
            if ( ( p == sentence || isblank( ( unsigned char )p[-1] ) ) &&
                 ( p[n] == '\0'  || isblank( ( unsigned char )p[n]  ) ) )
            {
                break;
            }
            else
            {
                p += n;
            }
        }
    }
    
    return ( char * )p;
}

int main( void )
{
    char *p = is_word_present( "I have a meeting", "meet" );
    
    if ( p )
    {
        puts( "The word is present in the sentence" );
    }
    else
    {
        puts( "The word is not present in the sentence" );
    }
    
    p = is_word_present( "I meet you every day", "meet" );
    
    if ( p )
    {
        puts( "The word is present in the sentence" );
    }
    else
    {
        puts( "The word is not present in the sentence" );
    }
    

    return 0;
}