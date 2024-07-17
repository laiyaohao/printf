void  ft_normal(char *str, int *ans, int *i)
{
  while (str[*i] != '%')
  {
    *ans += write(1, &str[*i], 1);
    *i++;
  } 
}