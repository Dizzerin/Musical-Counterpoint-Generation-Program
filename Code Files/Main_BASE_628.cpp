/*
 *	CPTR 142 Group Project (Project 3)
 *	Date: 2/12/19
 *	Authors: Caleb nelson
 *	Authors: Elliott Claus
 *	Description: 
 *
 */

/*
 * Note, please read the readme for coding standards used in this project
 * (I haven't created an official readme yet, so I'll put some quick notes here)
 * 
 * For anything that is not done yet, is currently being worked on, or needs to be done, please mark with a //TODO comment
 * don't use //FIXME, as Visual Studio will recognize //TODO comments and format them differently and they will also show up in the task list explorer
 * so it is easy to see what needs to be done and where etc.  Other recognized keywords are HACK, TODO, UNDONE, and UnresolvedMergeConflict.
 * To view the task list explorer, you can use the keyboard shortcut CTRL+\,T
 * or go to the menu at the top and select view, then other windows, and then task list near the bottom.  Double clicking on any todo item in the task list will take you 
 * to the location of that item
 * 
 * All standard variables will be named using camelCase
 * All classes will be named using UpperCamelCase
 * All global variables will be ALL_CAPS
 * Most all braces and indentations will follow K&R style
 * 
 * There are many more of these types of things we can choose what we want to follow, it's just helpful to follow a standard as the code looks better
 * and is easier to read and understand, for example all methods (functions within a class) may follow one naming conventions while all functions (outside of classes) may follow
 * another so it is easy to tell if a given function is part of a class or not.  Also can be useful to tell if some given name is an enum or a class or a struct etc. with just a glance
 * based off of the naming convention followed.  ReSharper will keep track of all this for us once we set it up and make it really easy to remember what style to use when by
 * underlining and giving suggestions when the style is not followed.  It also also really easy to rename/refactor any variable or class later, you can simply right click on it and
 * select refactor, or have your text cursor in the name and hit F2 to refactor it and this will rename it everywhere it occurs.
 * ReSharper also will do automatic code formatting following the predefined coding styles.  It also makes it really easy to create new classes and to implement functions and methods
 * and keep them organized in ascending order in a separate .h file etc.  This may sound like a lot or overwhelming but its really all quite simple and really nice once you see how
 * it all works, so we'll just have to meet sometime and I can show you guys some of the cool stuff really quick.  It makes coding so much nicer, you can also easily move lines around
 * or see ever place a specific variable or class or function etc. is used etc.  The debugger in this program is also one of the best in the world, you can do things like
 * change the value of variables live while the program is running etc.
 * 
 * Also there is an automatically generated ClassDiagram at the top you can view if you want.  This Diagram's style can be changed and is automatically updated as classes
 * are outlined in the code.  It can also be easily exported to an image or PDF if we want to use it.  Up to you guys though.
 * 
 * All code and function documentation will be done using Doxygen tags -- this is again because it integrates nicely with Visual Studio.
 * For example. when you are writing code to call a function or are hovering over a function, VS will show you
 * what that function does, its description, its pre and post conditions, what it returns, and a description of each parameter and its purpose etc.
 * or whatever else you have documented about it using the doxygen tags
 * The full list of available tags can be found here: http://www.doxygen.nl/manual/commands.html
 * But the main ones we will use are:
 * @brief - http://www.doxygen.nl/manual/commands.html#cmdbrief
 * @param <parameter name> - http://www.doxygen.nl/manual/commands.html#cmdparam
 * @return - http://www.doxygen.nl/manual/commands.html#cmdreturn
 * @pre - http://www.doxygen.nl/manual/commands.html#cmdpre
 * @post - http://www.doxygen.nl/manual/commands.html#cmdpost
 * Note: the comment will need to be of the style that starts with "/ **" (without spaces) for these tags to work properly -- see below for an example
 * 
 * All comments will start with a space and capital letter after the //
 * // Like this
 * 
 */

// Function documentation outline example
/**
 * @brief
 *
 *
 * @pre
 *
 *
 * @post
 *
 *
 * @return
 *
 *
 * @param
 *
 */


#include <iostream>
#include <vector>
#include <string>
#include "ExportToFile.h"
#include "GenerateLowerVoice.h"
#include "SpeciesOne.h"
#include "WritePhrase.h"
#include "Phrase.h"
#include "HelperFunctions.h"
// #include "Note.h"
// #include "WritePhrase.h"
// #include "SpeciesTwo.h"

using namespace std;

int main() {

	WritePhrase::setSeed(12);
	try {
		//tests();	// Tests ExportToFile
		tests2();	// Tests WritePhrase
			
	}
	catch (runtime_error &exception) {
		cout << exception.what() << endl;
	}

	return 0;
}