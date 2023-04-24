int pow(int base, int exp)
{
  int res=1;
  for (int i=0; i<exp; i++) 
	res *= base;
  return res;
}

int char_to_hex(char c)
{
  int i;
  if ( ('0' <= c)&&(c <= '9')) i = c - '0';
  else i = c - 'A' +10;
  // printf( " char_to_hex: char = %c, hex = %d \n", c, i );
  return i;
}

int int_to_hex(int i)
{
  char c;
  i = i & 15;
  if ( (0 <= i)&&(i <= 9)) c = i + '0';
  else c = (i-10) + 'A';
  // printf( " char_to_hex: char = %c, hex = %d \n", c, i );
  return c;
}

int hex_to_int(char c)
{
  int i;
  if ( ('0' <= c)&&(c <= '9') ) i = c - '0';
  switch(c)
    {
    case 'A':
   i = 10;
  break;
    case 'B':
   i = 11;
   break;
    case 'C':
   i = 12;
   break;
    case 'D':
   i = 13;
   break;
    case 'E':
   i = 14;
   break;
    case 'F':
   i = 15;
   break;
    }
  return i;
}

t_reg_args Decode_Register(char *Input_Reg)
{
	t_reg_args new_reg;
	if (Input_Reg[0]=='R')
	  {
    	new_reg.type='R';
        new_reg.number=atoi(Input_Reg+1);
        new_reg.index=0;
          } 
        else
          {
	    char temp_str[100];
	    strcpy(temp_str,Input_Reg);
	    char *str1=strstr(Input_Reg,"(");
	    str1[0]='\0';
	    new_reg.index=atoi(temp_str);
	    char *str2=str1+1;
	    if (str2[0]=='R')
	      {new_reg.type='R';}
       	    else
	    {new_reg.type='X';}
	    str2++;
	    str2[strlen(str2)-1]='\0';
	    new_reg.number=atoi(str2);
	  }
    return new_reg;
}

