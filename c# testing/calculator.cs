//Basic baby calculator with a switch 

string value;

do
{
    float result;

    Console.WriteLine("\nEnter the first number: ");
    int num1 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("\nEnter the second number");
    int num2 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("\nEnter opperator\n(\t/\t+\t-\t*): ");
    string symbol = Console.ReadLine();

    switch (symbol)
    {
        case "+":
            result = num1 + num2;
            Console.WriteLine("\nAddition: " + result);
            break;
        case "-":
            result = num1 - num2;
            Console.WriteLine("\nSubtraction: " + result);
            break;
        case "/":
            result = num1 / num2;
            Console.WriteLine("\nDivision: " + result);
            break;
        case "*":
            result = num1 * num2;
            Console.WriteLine("\nMultiplication: " + result);
            break;
        default:
            Console.WriteLine("\nWrong input!");
            break;
    }
    Console.WriteLine("\nDo you want to continue (y/n)?");
    value = Console.ReadLine();
} while (value == "y" || value == "Y");
