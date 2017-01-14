// NAIVE PATTERN MATCHING...

// TIME COMPLEXITY: O(n*(m-n+1))

#include <bits/stdc++.h>
using namespace std;

void naivePattern(char pat[], char text[])
{
	int n = strlen(pat);
	int m = strlen(text);
//	printf("n = %d   m = %d\n\n", n, m);
	int i,j;
	
	for(i=0; i<= m-n; i++)
	{
		
		for(j=0; j<n; j++)
		{
			if(text[i+j] != pat[j])
				break;
			
		}
		
		//printf("%d\n", j);
		if(j == n)
		{
			printf("Pattern found at index: %d\n", i);
			
		}
	}
	
//	printf("Pattern not found");
}

int main()
{
	char text[] = "AABAACAADAABAAABAA";
   	char pat[] = "AABA";
   	
   	naivePattern(pat, text);
	return 0;
}
