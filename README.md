# Sujet de programmation impérative

Page of project :

https://www.labri.fr/perso/renault/working/teaching/projets/2022-23-S6-C-Amazons.php

Page on thor :

https://thor.enseirb-matmeca.fr/ruby/projects/projetss6-amaz/overview

This project aims to implement the Amazons board and strategy game, through the implementation of two separate clients, each with a different game strategy. In addition, it is planned to design and implement a game server, responsible for managing the alternation of game turns between the two players.
*
-------------------------------------------------------------------------------------------------------
# Authors:
        Abderahim LAGRAOUI
        Majid MEDGHALI
        Moussa ALLOUBANE
        Mohammed BOUHAJA
-------------------------------------------------------------------------------------------------------


# how to compile
-----------
* make: compilation of the whole project

* make install: compilation and generation of a dynamic libraries in install/ directory.



    # terminal display
    - Execution: ./server -m $1 -t $2 -s $3 ./libplayer1.so ./libplayer2.so 
    or libplayer3.so instead of libplayer1.so or libplayer2.so because we have three players.  
        where: 
               - $1: width matrix graph. (obligatory).
               - $2: graph shape. values {'c', 'd', '8, 't'}.  (optional: 'c' as default shape).
               - $3 The number of game iterations.
    
    # sdl display 
    You need to comment out the lines that call the "display" function in the main loop and uncomment the lines that call the "sdl_display" function.

     - Execution: ./server -m $1 -t $2 -s $3 ./libplayer1.so ./libplayer2.so | ../sdl -M
     
     we manage the progress of the game using the arrow keys on the keyboard.

* make test: compilation of tests
 * Execution of tests:  ./alltests