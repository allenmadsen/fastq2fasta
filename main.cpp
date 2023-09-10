#include <iostream>
#include <string>

int main()
{
  std::string line;
  bool fieldWritten = false;

  while (std::getline(std::cin, line) && !line.empty())
  {
    if (line.find("@") == 0)
    {
      fieldWritten = true;
      std::cout << line.replace(0, 1, ">") << std::endl;
    }
    else if (fieldWritten)
    {
      fieldWritten = false;
      std::cout << line << std::endl;
    }
  }

  return 0;
}
