#pragma once
namespace Bardo
{
	class State {
	public:
		virtual void Init() = 0; //initialize the State

		virtual void HandleInput() = 0; //handle all input on the particular state
		virtual void Update() = 0;//update anything, variable, etc
		virtual void Draw(float dt) = 0; //draws the action, Dt time difference between frames

		virtual void Pause() =	0;
		virtual void Resume() =	0;
	};
}