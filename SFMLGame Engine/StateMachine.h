#pragma once

#include <memory>
#include <stack>

#include "State.hpp"

namespace Bardo
{
	typedef std::unique_ptr<State> StateRef;

	class StateMachine
	{
	public:
		StateMachine();
		~StateMachine();

		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();

		void ProcessStateChanges();

		StateRef &GetActiveState(); //returns the top active state

	private:
		std::stack<StateRef> _states; //all of the states that are presently in the stack
		StateRef _newState; //the latest state to add

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;
	};
}
