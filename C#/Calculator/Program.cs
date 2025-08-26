using System;

Console.WriteLine("=== Simple Calculator ===");

// Ask user for first number
Console.Write("Enter first number: ");
double num1 = Convert.ToDouble(Console.ReadLine());

// Ask user for second number
Console.Write("Enter second number: ");
double num2 = Convert.ToDouble(Console.ReadLine());

// Ask user for operation
Console.Write("Enter operation (+, -, *, /): ");
string op = Console.ReadLine();

// Perform calculation
double result;

switch (op)
{
    case "+":
        result = num1 + num2;
        break;
    case "-":
        result = num1 - num2;
        break;
    case "*":
        result = num1 * num2;
        break;
    case "/":
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            Console.WriteLine("Error: Cannot divide by zero!");
            return;
        }
        break;
    default:
        Console.WriteLine("Invalid operation!");
        return;
}

// Display result
Console.WriteLine($"Result: {num1} {op} {num2} = {result}");
