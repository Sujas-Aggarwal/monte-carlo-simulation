# Monte Carlo Simulator for the estimation of PI
## Installation (Windows) - 
- Clone the repo
- Download Raylib Library
- Run the following command to run the program

    ```bash
    g++ -o launch *.cpp -Wall -std=c++14 -D_DEFAULT_SOURCE -Wno-missing-braces -g -O0 C:/raylib/raylib/src/raylib.rc.data -I. -IC:/raylib/raylib/src -IC:/raylib/raylib/src/external -L. -LC:/raylib/raylib/src -LC:/raylib/raylib/src -lraylib -lopengl32 -lgdi32 -lwinmm -DPLATFORM_DESKTOP
    ```