#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	char *content;
	struct s_list	*next;
} t_list;

t_list	*ft_lstnew(char *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int	ft_lstsize(t_list *lst);

t_list *start = NULL;

int main()
{
	int size;
	t_list *tmp;

	ft_lstadd_back(&start, ft_lstnew("chips"));
	tmp = start;
	printf("Tras añadir el nuevo elemento tenemos %s\n", tmp->content);
	tmp->next = ft_lstnew("burger");
	printf("Tras añadir b tenemos %s\n", tmp->content);
	return (0);
}

t_list  *ft_lstnew(char *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list  *tmp;
	
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

t_list  *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int     ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
