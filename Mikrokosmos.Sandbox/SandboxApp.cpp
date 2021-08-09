import Mikrokosmos;

class SandboxApp : public mk::App
{

public:

	SandboxApp()
		: mk::App{ {.name = "Mikrokosmos Sandbox App" } }
	{
	}

	~SandboxApp() = default;

private:

};

int main()
{
	return mk::Run<SandboxApp>();
}