export module Mikrokosmos.Applications.EntryPoint;

import <iostream>;
import <stdexcept>;

export namespace mk
{
	template <typename App>
	int Run()
	{
		App app;

		std::cout << app.Name() << std::endl;
		
		try
		{
			app.Run();
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return EXIT_FAILURE;
		}

		return EXIT_SUCCESS;
	}
}
