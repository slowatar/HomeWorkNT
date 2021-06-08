#include <stdlib.h>
#include <string.h>

#define BUFER_MAX_LEN_TEMA 50
void GenerateTema( const char* VariableName)
{
	char bufer[BUFER_MAX_LEN_TEMA];
	unsigned int len = rand()%BUFER_MAX_LEN_TEMA;
	int pos;
	memset (bufer,0, BUFER_MAX_LEN_TEMA);

	
	for(pos = 0; pos < len; pos++ )
	{
		bufer[pos] = rand();	
		
	}
	
	lr_save_string(bufer,VariableName);
}