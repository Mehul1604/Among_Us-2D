# Computer Graphics - Assignment 1
## Among Us game in Opengl
In this assignment , using opengl , we were supposed to code a 2d among us single player variant

### GamePlay
- ### Feautures
- You play as a blue crewmate who has the objective to finsih 2 tasks and get out of the maze as soon as possible
- These tasks are yellow coloured spaces in the maze and you are required to go to these points to complete
-  Completion of a task is one step closer to you escaping and also rewards you 5 health points
- There is also a red coloured imposter who is chasing after you the whole time (with shortest path algorithm too!!)
- On coming in close vicinity of the imposter (1 maze cell) , he will kill you
- There is a red circular button which you can press by standing on it. This will kill the imposter
- There is a blue button which spawns powerups and obstacles.
- Pressing of any of these buttons gives you 1 health point
- The powerups are green spinning arrows that increase your health by 2 points
- Obstacles are red/brown spikes that hurt the player if you stand on them. It keeps taking away 3 health points if you stand on it
- You can choose the turn lights off and gain 1 health point a second. But this means you cannot see the impster coming and only the immediate areas in the room you are in is visible
- You win if you complete 2 tasks and exit from the bottom right
- You have 120 seconds to escape
- You lose if the imposter catches you , time runs out or health becomes 0
- ### Controls
- Player Movement - W(UP)   A(LEFT)   S(DOWN)  D(RIGHT)
- Lights Toggle (L)
- Quit - Esc

## Files
- ### source
    - ##### main.cpp - Main code that  renders in a loop
    - ##### shaders.cpp - shader code
    - ##### textures.cpp - texture code
    - ##### resource_manager.cpp -Cotains all code dealing with loading and linking of shaders
    - ##### color.cpp - RGB normalized color values
    - ##### utilityHeaders
        - ###### camera.h - the camera class
        - ###### global.h - global variables and functions
        - ###### gltext.h - header file for text rendering
        - ###### resource_manager.h - header file from resource_manager.cpp
        - ###### shaders.h 
        - ###### textures.h 
    - ##### gameFiles
        - ###### game.cpp - All code for initializing , updating , input and rendering of the game class
        - ###### maze.cpp - All code related to maze functions
        - ###### player.cpp - Player class and functions
        - ###### imposter.cpp - Imposter class and functions
        - ###### tasks.cpp - Task class
        - ###### powerups.cpp - Powerup class
        - ###### obstacles.cpp - Obstacle class
        - ###### buttons.cpp - Button class
     - ##### gameHeaders
        - ###### game.h - All code for initializing , updating , input and rendering of the game class
        - ###### maze.h - All code related to maze functions
        - ###### player.h - Player class and functions
        - ###### imposter.h - Imposter class and functions
        - ###### tasks.h - Task class
        - ###### powerups.h - Powerup class
        - ###### obstacles.h - Obstacle class
        - ###### buttons.h - Button class
    - ##### shaderFiles
        - ###### maze.fs - Maze fragment shader
        - ###### maze.vs  Maze vertex shader
        - ###### object.fs - Object fragment shader
        - ###### object.vs - Object vertex shader

#### How to run
- Go into the folder
- Make a build folder - "mkdir build"
- Go in the build folder - "cd build"
- Configure with cmake - "cmake .." in the build foler
- compile , run make in the build folder - "make"
- Run "./Among-Us"




