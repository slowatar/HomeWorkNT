#include <stdlib.h>
#include <string.h>

#define BUFER_MAX_LEN 200
void GenerateRandomText( const char* VariableName)
{
	char bufer[BUFER_MAX_LEN];
	unsigned int len = rand()%BUFER_MAX_LEN;
	int pos;
	memset (bufer,0, BUFER_MAX_LEN);

	
	for(pos = 0; pos < len; pos++ )
	{
		bufer[pos] = 0x20+( rand()%94);	
		
	}
	
	lr_save_string(bufer,VariableName);
}