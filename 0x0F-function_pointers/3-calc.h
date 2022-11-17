/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 * Description: Something
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
