void sortStrings(int n, char str[][50]) {
  // Write your code here
  for(int i =0;i<n-1;i++)
  {
    for(int j = 0;j<n-1-i;j++)
    {
      char temp[50];
      int res = strcmp(str[j],str[j+1]);
      if(res>0)
      {
        strcpy(temp,str[j]);
        strcpy(str[j],str[j+1]);
        strcpy(str[j+1],temp);
      }
    }
  }
  for(int i =0;i<n;i++)
  {
    printf("%s",str[i]);
    if(i<n-1) printf(" ");
  }
}
int main()
{
  int t,i,j=0;
  char a[10][50], b[50];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d", &i);
    j=i;
    while(i--)
    {
      scanf("%s", a[i]);
    }
    sortStrings(j, a);
    printf("\n");
  }
}