#include <iostream>
#include <random>

int main ()
{
  std::random_device rd;

  std::cout << std::string(80,'=')<<std::endl;
  std::cout << "default random_device characteristics:" << std::endl;
  std::cout << "minimum: " << rd.min() << " maximum: " << rd.max() << std::endl;
  std::cout << "entropy: " << rd.entropy() << "random number: " << rd() << std::endl;

  std::mt19937_64 gen(rd());
  std::uniform_int_distribution<uint64_t> rnd;

  for(int i=0;i<100;++i)  {
      std::cout << rnd(gen) <<std::endl;
  }
  std::cout << std::string(80,'=')<<std::endl;
  
  return 0;
}

