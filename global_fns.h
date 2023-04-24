// Project:	EMMA
// Entity	Global Functions
// File		globals_fns.h
// Date:	26 Sept 2000

// Units are declared here to allow forward references between
// them. HASE automatically declares them from the .edl file, but in
// sequence, only allowing backward references.

class bus;
class clock;
class registers;
class i_memory;
class d_memory;
class mpx_add_reg;
class mpx_reg;
class alu;
class microcode;


int pow(int, int);  // forms exponential without using doubles

int char_to_hex(char c);

int hex_to_int(char c);

struct t_reg_args {
  char type;       // Either R or F
  int  number;     // Register number
  int  index;	   // Offset (if any)
};

int int_to_hex (int i);

class t_reg_args Decode_Register(char *Instruction);



