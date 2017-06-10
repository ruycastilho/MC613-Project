LIBRARY ieee ; 
USE ieee.std_logic_1164.all;
use ieee.numeric_std.all;

LIBRARY work; 
USE work.all;

-- Package declarationfor custom data types
package data_types is

	constant NUMBER_EXAMPLES:	natural	:= 10;
	constant IMAGE_SIZE:	natural	:= 784;
	constant PARAMETER_RANGE:	real	:= 100.00;

	type image_array is array(0 to IMAGE_SIZE-1) of integer;
	
	type parameter is range -PARAMETER_RANGE to PARAMETER_RANGE;
	
	type parameter_array is array(0 to (IMAGE_SIZE*10)-1) of parameter;
	
	type label_array is array(0 to (NUMBER_EXAMPLES*10) - 1) of integer;
	
end package data_types;