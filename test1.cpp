#include <stdio.h>
class no{
public:
	void f() const;
private:
	int id=5;
};

void no::f() const
{
	printf("%d\n",id);
}
int main(int argc, char const *argv[])
{
	no i;
	i.f();
	/* code */
	return 0;
}