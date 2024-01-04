#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>


int main()
{
  // Create an executable batch file (Windows)
  #ifdef _WIN32
  const char* batch_file_name = "a.bat";
  {
    std::ofstream batch_file( batch_file_name );
    batch_file << 
      "@echo off\n"
      "echo sus\n"
      "pause\n"
      "start https://media.pitchfork.com/photos/5c7d4c1b4101df3df85c41e5/1:1/w_600/Dababy_BabyOnBaby.jpg\n"
      "pause\n";
  }
    // Create an executable shell file (Linux/POSIX)
  #else
  const char* batch_file_name = "./a.sh";
  {
    std::ofstream batch_file( batch_file_name );
    batch_file <<
        "#/bin/bash"
        "echo sus\n"
        "start https://media.pitchfork.com/photos/5c7d4c1b4101df3df85c41e5/1:1/w_600/Dababy_BabyOnBaby.jpg\n\n"
        "read -n 1 -s -p \"Press any key...\"\n"
        "echo";
  }
  
  std::filesystem::permissions( batch_file_name, std::filesystem::perms::owner_exec, std::filesystem::perm_options::add );
  #endif
  
  // Execute the file
  std::cout << "main() before batch call\n";
  std::system( batch_file_name );
  std::cout << "main() after batch call\n";
  
  // Delete the file
  remove( batch_file_name );
}