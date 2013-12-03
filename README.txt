README - CPSC 486 Assignment 1

Name:	Matt Short
Class:	CPSC 486
Email:	darkhelmet125@csu.fullerton.edu
Language:	C/C++
Tools:	OpenGL, GLFW, Xcode 5

Command line options/User key presses:
-v: not implemented.
-h: not implemented.
'q' and 'esc' quit the program.
Up arrow moves camera forward.
Down arrow moves camera backwards.

This assignment is heavily based off of a tutorial from http://www.youtube.com/watch?v=zC6dWIr5804&list=PLKMRBwuMXxOqSeIUXW45WwwN1NsPHCtkY. It is by a user named initWithData who is demonstrating how to create a First Person Shooter game using Xcode, OpenGL 3+, vertex buffer objects, and GLFW 3. This is the only tutorial that I found that actually worked for me.

The assignment uses vertex buffer objects, implements a scene graph, contains 3 objects in scene, has 3 different light sources, has a skybox, and a plane intersecting the skybox.
The scene contains:
	-skybox
	-plane
	-3 cubes rotated differently at different positions
I am unable to determine why flatshading doesn't work for my skybox or my plane, therefore they are using phong shading like the cubes are. I was also unable to figure out how to use .ply models with vertex buffer objects.

My program compiles with 2 warnings for me. The warnings are:
	-'gluLookAt' is deprecated as of 10.9
	-'gluPerspective' is deprecated as of 10.9
I tried implementing GLKMatrix4 functions from the GLKit.framework and it broke my whole program so it wasn't implemented which would have fixed my warnings.