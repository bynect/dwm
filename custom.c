int curr_layout = 0;

void
layoutcycle(const Arg *_arg)
{
	(void)_arg;
	if (layouts[curr_layout++].symbol == NULL)
	{
		curr_layout = 1;
	}

	const Arg arg = {.v = &layouts[curr_layout - 1]};
	setlayout(&arg);
}
