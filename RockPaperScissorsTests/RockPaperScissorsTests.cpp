#include "pch.h"
#include "CppUnitTest.h"
#include "rock_paper_scissors.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
	TEST_CLASS(RockPaperScissorsTests)
	{
	public:
		
		TEST_METHOD(RockBeatsScissors_Player1Wins)
		{
			const char* result = determineWinner("Rock", "Scissors");

			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(ScissorsBeatsPaper_Player2Wins)
		{
			const char* result = determineWinner("Paper", "Scissors");

			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(BothPlayersChooseRock_Draw)
		{
			const char* result = determineWinner("Rock", "Rock");

			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(PaperBeatsRock_Player1Wins)
		{
			const char* result = determineWinner("Paper", "Rock");

			Assert::AreEqual("Player1", result);
		}
	};

}
