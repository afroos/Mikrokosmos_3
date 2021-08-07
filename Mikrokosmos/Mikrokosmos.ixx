export module Mikrokosmos;

import <cstdio>;

namespace mk
{
	export __declspec(dllexport) void HelloWorld()
	{
		printf("Welcome to Mikrokosmos!\n");
	}
}