#include "Unity/unity_fixture.h"

static void AllTestHost(void)
{
	RUN_TEST_GROUP(SampleLogicTest);
	RUN_TEST_GROUP(LedDriverTestHost);
}

int main(int argc, const char * argv[])
{
	extern void AllTestCommon(void);
	UnityMain(argc, argv, AllTestCommon);

	UnityMain(argc, argv, AllTestHost);
}
