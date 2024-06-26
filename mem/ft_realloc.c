#include "../libft.h"
#include <errno.h>

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size, int alloc_lvl)
{
	void	*newptr;

	if (!ptr)
		return (walloc(new_size, alloc_lvl));
	if (!new_size && ptr)
		return (wfree(ptr), NULL);
	newptr = walloc(new_size, alloc_lvl);
	if (!newptr)
		return (errno = ENOMEM, NULL);
	ft_memcpy(newptr, ptr, old_size);
	wfree(ptr);
	return (newptr);
}

#ifdef REALLOCTEST

#include <stdio.h>

int main()
{
	char *lol = malloc(10);
	ft_strcpy(lol, "hahahaha");
	printf("%s\n", lol);
	lol = ft_realloc(lol, 10, 20);
	ft_strcpy(lol, "hahahahahahahahaha");
	printf("%s\n", lol);
	free(lol);
}

#endif








