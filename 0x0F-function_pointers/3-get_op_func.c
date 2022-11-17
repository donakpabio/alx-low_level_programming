/**
 * get_op_func - Do something
 * @s: input
 * @a: input
 * @b: input
 * Return: result
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops.op[i].op == s)
		{
			return (ops.op[i].(*f)(a, b));
		}
		i++;
	}
}
