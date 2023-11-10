#ifndef CALC_H
#define CALC_H

/**
* struct op - A struct operator.
* @op: The operator.
* @e: The associated function.
*/

typedef struct op
{
	char *op;
	int (*e)(int v, int k);
	} op_t;

	int op_add(int v, int k);
	int op_sub(int v, int k);
	int op_mul(int v, int k);
	int op_div(int v, int k);
	int op_mod(int v, int k);
	int (*get_op_func(char *s))(int, int);

#endif
