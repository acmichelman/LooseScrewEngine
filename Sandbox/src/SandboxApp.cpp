//This is our game. Anything to do with the game starts here as the main function


#include <LooseScrew.h>

class Sandbox : public LooseScrew::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox() 
	{

	}
};

LooseScrew::Application* LooseScrew::CreateApplication()
{
	return new Sandbox();
}