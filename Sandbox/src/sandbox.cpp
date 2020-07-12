#include <drakosha.h>

class Sandbox : public Drakosha::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Drakosha::Application* Drakosha::createApplication()
{
	return new Sandbox();
}
