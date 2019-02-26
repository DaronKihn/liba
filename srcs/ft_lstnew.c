#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	k;

	if (!(k = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		k->content = NULL;
		k->content_size = 0;
	}
	else
	{
		k->content = malloc(content_size);
		k->content = ft_memcpy(k->content, content, content_size);
		k->content_size = content_size;
	}
	k->next = NULL;
	return (k);
}