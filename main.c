#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "./get_next_line.h"

int	 main()
{
	char *line;
	int		ret;

	ret = open("get_next_line.c", O_RDONLY);
	while (get_next_line(ret, &line))
	{
		printf("%s\n", line);
		free(line);
	}
	close(ret);
	return (0);
}
