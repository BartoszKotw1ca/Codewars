int solution(int number)
{
  int i;
  int res;
 
  res = 0;
  i = 2;
  while (i < number)
  {
     if (i % 3 == 0 || i % 5 == 0)
       res += i;
    i ++;
  }
  return (res);
}
