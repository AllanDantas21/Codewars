int  is_letter(char letter)
  {
    return ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'));
}
int  is_upper(char letter)
  {
    return (letter >= 'A' && letter <= 'Z');
}
int  is_lower(char letter)
  {
    return (letter >= 'a' && letter <= 'z');
}
int same_case (char a, char b)
{
  if (!(is_letter(a) && is_letter(b)))
    return (-1);
  if(is_upper(a) && is_upper(b))
    return (1);
  if(is_lower(a) && is_lower(b))
    return (1);
	return 0;
}