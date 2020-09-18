
namespace NUMpp
{
	long int powr(int* inv, int pow)
	{
		int ggf;
		int gh = *inv;
		ggf = gh;
		for (size_t i = 0; i < pow; i++)
		{
			gh * ggf;
		}
		return *inv;
	}
}