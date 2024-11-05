//C# number guessing game

using System;
Console.WriteLine("\t\t\tWelcome to the number guessing game!");
Console.WriteLine("You have to guess a number between 1 and 100.\nYou will have a limited amount of choices based on the level you choose to play!\nGood luck!");

while (true)
{
    Console.WriteLine("\nEnter a difficulty level: \n");
    Console.WriteLine("1 for easy!\t");
    Console.WriteLine("2 for medium!\t");
    Console.WriteLine("3 for hard!\t");
    Console.WriteLine("0 to close the program!\t");

    //Difficulty selection
    Console.WriteLine("\nChose your level");
    int difficultyLevel = Convert.ToInt32(Console.ReadLine());

    //Generate the random number
    Random random = new Random();
    var secrectNumber = random.Next(1+ 100);

    //Easy level
    if (difficultyLevel == 1)
    {
        Console.WriteLine("\nYou have chosen the easy level!" + "\nYou have 10 guesses to find the number between 1 - 100");
        int guessesLeft = 10;
        for (int i = 1; i <= 10; i++)
        {
            //Ayy dios mio
            Console.WriteLine("\n\nEnter your guess: ");
            int playerChoice = Convert.ToInt32(Console.ReadLine());

            if (playerChoice == secrectNumber)
            {
                Console.WriteLine("\nGreat job+ you got it! The number was " + playerChoice + "\t\t\tThanks for playing!" + "\nMake sure to play again!\n\n");
                break;
            } else
            {
                Console.WriteLine("\nNope! " + playerChoice + " is not the right number!");

                if (playerChoice > secrectNumber)
                {
                    Console.WriteLine("\nThe number is less than " + playerChoice+ "\nPlease choose again.");
                } else
                {
                    Console.WriteLine("\nThe number is higher than " + playerChoice+ "\nPlease choose again.");
                }
            }
            guessesLeft--;

            Console.WriteLine("\n" + guessesLeft + " guesses left!");

            if (guessesLeft == 0)
            {
                Console.WriteLine("\nYou ran out of guesses and could not find the number!\nThe number was " + secrectNumber + ". \nYou loose!\nPlay again and try to win!\n\n");
            }
        }     
    }
    else if (difficultyLevel == 2)
    {
        Console.WriteLine("\nYou have chosen the medium level!" + "\nYou have 7 guesses to find the number between 1 - 100");
        int guessesLeft = 7;
        for (int i = 1; i <= 7; i++)
        {
            //Ayy dios mio
            Console.WriteLine("\n\nEnter your guess: ");
            int playerChoice = Convert.ToInt32(Console.ReadLine());

            if (playerChoice == secrectNumber)
            {
                Console.WriteLine("\nGreat job+ you got it! The number was " + playerChoice + "\t\t\tThanks for playing!" + "\nMake sure to play again!\n\n");
                break;
            }
            else
            {
                Console.WriteLine("\nNope! " + playerChoice + " is not the right number!");

                if (playerChoice > secrectNumber)
                {
                    Console.WriteLine("\nThe number is less than " + playerChoice + "\nPlease choose again.");
                }
                else
                {
                    Console.WriteLine("\nThe number is higher than " + playerChoice + "\nPlease choose again.");
                }
            }
            guessesLeft--;

            Console.WriteLine("\n" + guessesLeft + " guesses left!");

            if (guessesLeft == 0)
            {
                Console.WriteLine("\nYou ran out of guesses and could not find the number!\nThe number was " + secrectNumber + ". \nYou loose!\nPlay again and try to win!\n\n");
            }
        }
    } else if (difficultyLevel == 3)
    {
        Console.WriteLine("\nYou have chosen the hard level!" + "\nYou have 5 guesses to find the number between 1 - 100");
        int guessesLeft = 5;
        for (int i = 1; i <= 5; i++)
        {
            //Ayy dios mio
            Console.WriteLine("\n\nEnter your guess: ");
            int playerChoice = Convert.ToInt32(Console.ReadLine());

            if (playerChoice == secrectNumber)
            {
                Console.WriteLine("\nGreat job+ you got it! The number was " + playerChoice + "\t\t\tThanks for playing!" + "\nMake sure to play again!\n\n");
                break;
            }
            else
            {
                Console.WriteLine("\nNope! " + playerChoice + " is not the right number!");

                if (playerChoice > secrectNumber)
                {
                    Console.WriteLine("\nThe number is less than " + playerChoice + "\nPlease choose again.");
                }
                else
                {
                    Console.WriteLine("\nThe number is higher than " + playerChoice + "\nPlease choose again.");
                }
            }
            guessesLeft--;

            Console.WriteLine("\n" + guessesLeft + " guesses left!");

            if (guessesLeft == 0)
            {
                Console.WriteLine("\nYou ran out of guesses and could not find the number!\nThe number was " + secrectNumber + ". \nYou loose!\nPlay again and try to win!\n\n");
            }
        }
    } else if (difficultyLevel == 0)
    {
        System.Environment.Exit(0);
    } else
    {
        Console.WriteLine("\nOops! You did not enter a correct number.\nPlease enter 1, 2, 3 or 0 to start or end the game.");
    }
}
