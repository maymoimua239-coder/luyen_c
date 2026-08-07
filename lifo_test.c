#include <stdio.h>
void Ham_C(){
	int bien_c = 3;
	printf("   [+] Ham C vao stack. Dia chi bien C: %p\n", &bien_c);
	printf("   [-] Ham C ra khoi stack!\n");
}
void Ham_B(){
	int bien_b = 2;
	printf("  [+] Ham B vao stack. Dia chi bien B: %p\n", &bien_b);
	Ham_C();
	printf("  [-] Ham B ra khoi stack!\n");

}
void Ham_A(){
	int bien_a = 1;
	printf(" [+] Ham A vao stack. Dia chi bien A: %p\n", &bien_a);
	Ham_B();
	printf(" [-] Ham A roi khoi stack!\n");
}
int main(){
	int bien_main = 0;
	printf("[+] Ham main vao stack. Dia chi bien main: %p\n", &bien_main);
	Ham_A();
	printf("[-] Ham main roi khoi stack!\n");
	return 0;
}

