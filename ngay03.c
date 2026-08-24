#include <stdio.h>
#include <string.h>
int main(){
	char buffer[10];
	fgets(buffer, sizeof(buffer), stdin);
	buffer[strcspn(buffer, "\n")] = '\0';
	int len = 0;
	while (buffer[len] != '\0'){
		len += 1;
	}
	printf("%d\n", len);
	return 0;
}

