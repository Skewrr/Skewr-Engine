#include <Skewr Engine.h>

class Game : public se::Application {
public:
	Game() {
	}
	~Game() {
	}
};

se::Application* se::createApplication() {
	return new Game();
}