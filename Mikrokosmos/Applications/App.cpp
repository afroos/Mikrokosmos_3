module;

#include <stdexcept>

module Mikrokosmos.Applications.App;

namespace mk
{
	App::App(const Description& description)
	{
		SetName(description.name);
	}

	App::~App()
	{
	}

	std::string App::Name() const
	{
		return m_name;
	}

	void App::SetName(std::string name)
	{
		if (name.empty())
		{
			throw std::invalid_argument("App name cannot be empty.");
		}
		m_name = name;
	}

	void App::Run()
	{
		Initialize();
		MainLoop();
		Shutdown();
	}

	void App::Initialize()
	{
	}

	void App::MainLoop()
	{
		while (true);
	}

	void App::Shutdown()
	{
	}
}