#include <unistd.h>

int main(int argc, char *argv[])
{
	char c = argv[1][0];
	write(1, &c, 1);
}
