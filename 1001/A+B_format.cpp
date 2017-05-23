/*Calculate a + b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input

Each input file contains one test case. Each case contains a pair of integers a and b where -1000000 <= a, b <= 1000000. The numbers are separated by a space.

Output

For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input
-1000000 9
Sample Output
-999,991*/
#include <stdio.h>
#include <string.h>

void format(char a[],int n)
{
   for(int i = 1;i<=n;i++)
   {
        printf("%c",a[i-1]);
        if(i%3==n%3 && i!=n && a[i-1] != '-')
        {
            printf(",");
        }
   }
}


int main()
{
    int a,b,sum;
    char c[1];
    scanf("%d %d",&a,&b);
    sum = a+b;
    sprintf(c,"%d",sum);
    format(c,strlen(c));
    getchar();
    getchar();
}
