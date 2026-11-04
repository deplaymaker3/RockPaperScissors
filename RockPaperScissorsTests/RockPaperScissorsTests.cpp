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
		TEST_METHOD(InvalidFirstChoice_ReturnsInvalid)
		{
			const char* result = determineWinner("Banana", "Rock");

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(InvalidSecondChoice_ReturnsInvalid)
		{
			const char* result = determineWinner("Rock", "Banana");

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(BothChoicesInvalid_ReturnsInvalid)
		{
			const char* result = determineWinner("Banana", "Orange");

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(SameInvalidChoices_ReturnsInvalid)
		{
			const char* result = determineWinner("Banana", "Banana");

			Assert::AreEqual("Invalid", result);
		}
		TEST_METHOD(ScissorsBeatsRock_Player2Wins)
		{
			const char* result = determineWinner("Scissors", "Rock");

			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(ScissorsBeatsPaper_Player1Wins)
		{
			const char* result = determineWinner("Scissors", "Paper");

			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(RockBeatsPaper_Player2Wins)
		{
			const char* result = determineWinner("Rock", "Paper");

			Assert::AreEqual("Player2", result);
		}
	};

}
