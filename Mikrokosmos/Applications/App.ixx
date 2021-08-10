export module Mikrokosmos.Applications.App;

import <string>;

export namespace mk
{
	class App
	{

	public:

		struct Description
		{
			std::string name = "Mikrokosmos App";
		};

		App(const Description& description = {});

		virtual ~App();

		App(const App&)            = delete;
		App(App&&)                 = delete;
		App& operator=(const App&) = delete;
		App& operator=(App&&)      = delete;

		std::string Name() const;

		virtual void Run();

	protected:

		virtual void Initialize();
		virtual void MainLoop();
		virtual void Shutdown();
		
	private:

		void SetName(const std::string& name);

	private:

		std::string m_name;

	};
}