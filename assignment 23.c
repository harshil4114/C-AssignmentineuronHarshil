#include <iostream>

int main() { std::cout << "Hello iNeuron" << std::endl; }
{
  std::cout << "Hello" << std::endl;
  std::cout << "iNeuron" << std::endl;
  return 0;
}
{
  int num1, num2;
  std::cout << "Enter first number: ";
  std::cin >> num1;
  std::cout << "Enter second number: ";
  std::cin >> num2;

  int sum = num1 + num2;
  std::cout << "Sum: " << sum << std::endl;

  return 0;
}

{
  double radius;
  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  double area = M_PI * radius * radius;
  std::cout << "Area of the circle: " << area << std::endl;

  return 0;
}

{
  double length, width, height;
  std::cout << "Enter length, width, and height of the cuboid: ";
  std::cin >> length >> width >> height;

  double volume = length * width * height;
  std::cout << "Volume of the cuboid: " << volume << std::endl;

  return 0;
}

{
  double firstNumber, secondNumber, thirdNumber;
  std::cout << "Enter three numbers: ";
  std::cin >> firstNumber >> secondNumber >> thirdNumber;

  double average = (firstNumber + secondNumber + thirdNumber) / 3.0;
  std::cout << "Average: " << average << std::endl;

  return 0;
}

{
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  int square = num * num;
  std::cout << "Square of " << num << " is: " << square << std::endl;
}

{
  int a, b;
  std::cout << "Enter two numbers: ";
  std::cin >> a >> b;

  std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

  a = a + b;
  b = a - b;
  a = a - b;

  std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

  return 0;
}

{
  int num1, num2;
  std::cout << "Enter two numbers: ";
  std::cin >> num1 >> num2;

  int max = (num1 > num2) ? num1 : num2;
  std::cout << "Maximum: " << max << std::endl;

  return 0;
}

{
  int arr[10];
  std::cout << "Enter 10 numbers: ";

  for (int i = 0; i < 10; i++) {
    std::cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += arr[i];
  }

  std::cout << "Sum of the array elements: " << sum << std::endl;

  return 0;
}