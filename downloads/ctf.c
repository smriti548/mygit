#include<stdio.h>

int main() 
{
	char ch;
	int c, nt, ns;
    	nt = 0;
    	ns = 0;
	FILE *fp;
        fp=fopen("read.txt", "r");
	while (1)  
        { 
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		if(ch==' ')
		ns++;
		if(ch=='\t')
		nt++;
        }
	fclose(fp);
	printf("whitespaces: %d\nTabs: %d\n", ns, nt);
return 0;
}
