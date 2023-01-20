#include "ft_printf_0.h"

int	main (int ac, char ** av)
{

int	w;

w = 0;

printf("✯\n");
//BONUS FLAGS	

		//EMPTY CHAIN
			// printf("", 5);
		//WRONG ARGUMENT
			// printf("apologies%c", 5)
	//0i ; Who leads between the width (doesn't count the '\0') and the lenght of the decimal interger ? 
	printf(" 🏳️ FORMAT SPEC FOR INTERGER PART ONLY TYPE(i,d,u) 🏳️\n");
	printf("🚩 EXLCLUSIVE FLAG '0', SMALL "YELLOW"WIDTH"RESET_COLOR", NO TEXT 🚩\n"); printf("\t\tC LIBRARY'S PRINTF FUNCTION RESULTS\t\t\t\t\t\t\t\tMY PRINTF FUNCTION RESUTLS\n\n");
	printf("%%\"0"YELLOW"1"RESET_COLOR"i\", 5	:"GREEN"hhh%01ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"i\", 5	:"GREEN"hhh%02ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"i\", 5	:"GREEN"hhh%03ihhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 543	:"GREEN"hhh%04ihhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5432	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54321	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"i\", 54321	:"GREEN"hhh%06ihhh"RESET_COLOR"\t🔳\n\n", 54321);

	printf("%%\"0"YELLOW"1"RESET_COLOR"d\", 5	:"GREEN"hhh%01dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"d\", 5	:"GREEN"hhh%02dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"d\", 5	:"GREEN"hhh%03dhhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 5	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 54	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 543	:"GREEN"hhh%04dhhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 5432	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 54321	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"d\", 54321	:"GREEN"hhh%06dhhhh"RESET_COLOR"\t🔳\n\n", 54321);

	printf("%%\"0"YELLOW"1"RESET_COLOR"u\", -5	:"GREEN"hhh%01uhhh"RESET_COLOR"\t", -5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"u\", -5	:"GREEN"hhh%02uhhh"RESET_COLOR"\t", -5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"u\", 5	:"GREEN"hhh%03uhhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 5	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 54	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"5"RESET_COLOR"u\", 543	:"GREEN"hhh%04uhhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 5432	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 54321	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"u\", 54321	:"GREEN"hhh%06uhhh"RESET_COLOR"\t🔳\n\n", 54321);
	
	printf("🚩BIGGER "YELLOW"WIDTH"RESET_COLOR"🚩\n");
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%010ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%011ihhh"RESET_COLOR"\t\t\t🔳\n", 5);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%012ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%013ihhh"RESET_COLOR"\t\t\t🔳\n", 5);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 54	:"GREEN"hhh%014ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 543	:"GREEN"hhh%054ihhh"RESET_COLOR"\t\t\t🔳\n", 543);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 5432	:"GREEN"hhh%012ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 54321	:"GREEN"hhh%014ihhh"RESET_COLOR"\t🔳\n", 54321);
	printf("%%\"0"YELLOW"10"RESET_COLOR"i\", 54321	:"GREEN"hhh%06ihhh"RESET_COLOR"\t🔳\n\n", 54321);

	printf("%%\"0"YELLOW"1"RESET_COLOR"d\", 5	:"GREEN"hhh%01dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"d\", 5	:"GREEN"hhh%02dhhh"RESET_COLOR"\t\t🔳\n", 5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"d\", 5	:"GREEN"hhh%03dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 5	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 54	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 543	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 5432	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"d\", 54321	:"GREEN"hhh%04dhhh"RESET_COLOR"\t\t🔳\n", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"d\", 54321	:"GREEN"hhh%06dhhh"RESET_COLOR"\t\n\n", 54321);

	printf("%%\"0"YELLOW"1"RESET_COLOR"u\", -5	:"GREEN"hhh%01uhhh"RESET_COLOR"\t", -5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"u\", -5	:"GREEN"hhh%02uhhh"RESET_COLOR"\t", -5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"u\", 5	:"GREEN"hhh%03uhhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 5	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 54	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"5"RESET_COLOR"u\", 543	:"GREEN"hhh%04uhhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 5432	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"u\", 54321	:"GREEN"hhh%04uhhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"u\", 54321	:"GREEN"hhh%06uhhh"RESET_COLOR"\t🔳\n\n", 54321);


printf("🚩 FLAG '-', SMALL "YELLOW"WIDTH"RESET_COLOR" 🚩\n"); printf("\t\tC LIBRARY'S PRINTF FUNCTION RESULTS\t\t\t\t\t\t\t\tMY PRINTF FUNCTION RESUTLS\n\n");
	printf("%%\"-"YELLOW"1"RESET_COLOR"i\", 5	:"GREEN"hhh%-1ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"2"RESET_COLOR"i\", 5	:"GREEN"hhh%-2ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"3"RESET_COLOR"i\", 5	:"GREEN"hhh%-3ihhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 5	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 54	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 543	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 5432	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 54321	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"-"YELLOW"6"RESET_COLOR"i\", 54321	:"GREEN"hhh%-6ihh"RESET_COLOR"\t🔳\n\n", 54321);

	printf("%%\"-"YELLOW"1"RESET_COLOR"d\", 5	:"GREEN"hhh%-1dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"2"RESET_COLOR"d\", 5	:"GREEN"hhh%-2dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"3"RESET_COLOR"d\", 5	:"GREEN"hhh%-3dhhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 5	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 54	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 543	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 5432	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 54321	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"-"YELLOW"6"RESET_COLOR"d\", 54321	:"GREEN"%-6d"RESET_COLOR"\t🔳\n\n", 54321);
	printf("%%\"-"YELLOW"1"RESET_COLOR"u\", -5	:"GREEN"hhh%-1uhhh"RESET_COLOR"\t", -5);
	printf("%%\"-"YELLOW"2"RESET_COLOR"u\", -5	:"GREEN"hhh%-2uhhh"RESET_COLOR"\t", -5);
	printf("%%\"-"YELLOW"3"RESET_COLOR"u\", 5	:"GREEN"hhh%-3uhhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 5	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 54	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"5"RESET_COLOR"u\", 543	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 5432	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 54321	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"-"YELLOW"6"RESET_COLOR"u\", 54321	:"GREEN"hhh%-6uhhh"RESET_COLOR"\t🔳\n\n", 54321);
		printf("🚩BIGGER "YELLOW"WIDTH"RESET_COLOR"🚩\n");
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%-10ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%-11ihhh"RESET_COLOR"\t\t\t🔳\n", 5);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%-12ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 5	:"GREEN"hhh%-13ihhh"RESET_COLOR"\t\t\t🔳\n", 5);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 54	:"GREEN"hhh%-14ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 543	:"GREEN"hhh%-54ihhh"RESET_COLOR"\t\t\t🔳\n", 543);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 5432	:"GREEN"hhh%-12ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 54321	:"GREEN"hhh%-14ihhh"RESET_COLOR"\t🔳\n", 54321);
	printf("%%\"-"YELLOW"10"RESET_COLOR"i\", 54321	:"GREEN"hhh%-6ihhh"RESET_COLOR"\t🔳\n\n", 54321);
	printf("%%\"-"YELLOW"1"RESET_COLOR"d\", 5	:"GREEN"hhh%-1dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"2"RESET_COLOR"d\", 5	:"GREEN"hhh%-2dhhh"RESET_COLOR"\t\t🔳\n", 5);
	printf("%%\"-"YELLOW"3"RESET_COLOR"d\", 5	:"GREEN"hhh%-3dhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 5	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t🔳\n", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 54	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 543	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t🔳\n", 543);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 5432	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"4"RESET_COLOR"d\", 54321	:"GREEN"hhh%-4dhhh"RESET_COLOR"\t\t🔳\n", 54321);
	printf("%%\"-"YELLOW"6"RESET_COLOR"d\", 54321	:"GREEN"hhh%-6dhhh"RESET_COLOR"\t\n\n", 54321);
	printf("%%\"-"YELLOW"1"RESET_COLOR"u\", -5	:"GREEN"hhh%-1uhhh"RESET_COLOR"\t", -5);
	printf("%%\"-"YELLOW"2"RESET_COLOR"u\", -5	:"GREEN"hhh%-2uhhh"RESET_COLOR"\t", -5);
	printf("%%\"-"YELLOW"3"RESET_COLOR"u\", 5	:"GREEN"hhh%-3uhhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 5	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 54	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"5"RESET_COLOR"u\", 543	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 5432	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"4"RESET_COLOR"u\", 54321	:"GREEN"hhh%-4uhhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"-"YELLOW"6"RESET_COLOR"u\", 54321	:"GREEN"hhh%-6uhhh"RESET_COLOR"\t🔳\n\n", 54321);
	//printf("%%\"Bonjour\", 54321	:"GREEN"%06s"RESET_COLOR"\t\n", "Bonjour");		
printf("🚩 FLAG '0', SMALL "YELLOW"WIDTH"RESET_COLOR", WITH TEXT 🚩\n"); printf("\t\tC LIBRARY'S PRINTF FUNCTION RESULTS\t\t\t\t\t\t\t\tMY PRINTF FUNCTION RESUTLS\n\n");
	printf("TEXT LEFT\n");
	printf("%%\"-"YELLOW"1"RESET_COLOR"i\", 5	:"GREEN"hhh%-1ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"2"RESET_COLOR"i\", 5	:"GREEN"hhh%-2ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"3"RESET_COLOR"i\", 5	:"GREEN"hhh%-3ihhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 5	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 54	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 543	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 5432	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 54321	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"-"YELLOW"6"RESET_COLOR"i\", 54321	:"GREEN"hhh%-6ihhh"RESET_COLOR"\t🔳\n\n", 54321);
	printf("TEXT-RIGHT\n");
	printf("%%\"-"YELLOW"1"RESET_COLOR"i\", 5	:"GREEN"hhh%-1ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"2"RESET_COLOR"i\", 5	:"GREEN"hhh%-2ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"3"RESET_COLOR"i\", 5	:"GREEN"hhh%-3ihhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 5	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 54	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 543	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 5432	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"-"YELLOW"4"RESET_COLOR"i\", 54321	:"GREEN"hhh%-4ihhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"-"YELLOW"6"RESET_COLOR"i\", 54321	:"GREEN"hhh%-6ihhh"RESET_COLOR"\t🔳\n\n", 54321);





	//printf("%%\"Bonjour\", 54321	:"GREEN"%06s"RESET_COLOR"\t🔳\n", "Bonjour");		
printf("🚩 FLAG '0', SMALL "YELLOW"WIDTH"RESET_COLOR", WITH TEXT 🚩\n"); printf("\t\tC LIBRARY'S PRINTF FUNCTION RESULTS\t\t\t\t\t\t\t\tMY PRINTF FUNCTION RESUTLS\n\n");
	printf("TEXT LEFT\n");
	printf("%%\"0"YELLOW"1"RESET_COLOR"i\", 5	:"GREEN"hhh%01i"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"i\", 5	:"GREEN"hhh%02i"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"i\", 5	:"GREEN"hhh%03i"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5	:"GREEN"hhh%04i"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54	:"GREEN"hhh%04i"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 543	:"GREEN"hhh%04i"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5432	:"GREEN"hhh%04i"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54321	:"GREEN"hhh%04i"RESET_COLOR"\t\t", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"i\", 54321	:"GREEN"hhh%06i"RESET_COLOR"\t🔳\n\n", 54321);

	printf("TEXT RIGHT\n");
	printf("%%\"0"YELLOW"1"RESET_COLOR"i\", 5	:"GREEN"%01ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"i\", 5	:"GREEN"%02ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"i\", 5	:"GREEN"%03ihhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5	:"GREEN"%04ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54	:"GREEN"%04ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 543	:"GREEN"%04ihhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5432	:"GREEN"%04ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54321	:"GREEN"%04ihhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"i\", 54321	:"GREEN"%06ihhh"RESET_COLOR"\t🔳\n\n", 54321);


	printf("🚩 FLAG COMB '0' & '-', SMALL "YELLOW"WIDTH"RESET_COLOR", NO TEXT 🚩\n"); printf("\t\tC LIBRARY'S PRINTF FUNCTION RESULTS\t\t\t\t\t\t\t\tMY PRINTF FUNCTION RESUTLS\n\n");
	printf("%%\"0"YELLOW"1"RESET_COLOR"i\", 5	:"GREEN"hhh%01ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"2"RESET_COLOR"i\", 5	:"GREEN"hhh%02ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"3"RESET_COLOR"i\", 5	:"GREEN"hhh%03ihhh"RESET_COLOR"\t🔳\n", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 5);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 54);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 543	:"GREEN"hhh%04ihhh"RESET_COLOR"\t🔳\n", 543);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 5432	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 5432);
	printf("%%\"0"YELLOW"4"RESET_COLOR"i\", 54321	:"GREEN"hhh%04ihhh"RESET_COLOR"\t\t", 54321);
	printf("%%\"0"YELLOW"6"RESET_COLOR"i\", 54321	:"GREEN"hhh%06ihhh"RESET_COLOR"\t🔳\n\n", 54321);

	//0d
	/*printf("%02d\n", 5);
	printf("%02d\n", 543);


	printf("%1.2f\n", 5.43);
	printf("%2.2f\n", 5.4);
	//printf("%.2f\n", 5);

	//0.f
	printf("%041.2f\n", 5.43);
	printf("%042.2f\n", 5.43);
	//printf("%041.2f\n", 5);

	printf("%.2f\n", 5.43);
	printf("%.2f\n", 5.43);
	//printf("%.2f\n", 5);*/

	return (0);
}