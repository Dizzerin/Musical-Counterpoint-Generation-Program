# Musical Counterpoint Generation Program
This is a C++ program which randomly generates a lower voice and then generates melodic counterpoint for a corresponding upper voice according to the user's desired specifications.

Counterpoint Definition: "The art or technique of setting, writing, or playing a melody or melodies in conjunction with another, according to fixed rules." (Source: Oxford Language Dictionaries)

# User operation instructions
Operation of this program is fairly simlly and straight forward.  Simply:
* Run the program
* Follow the on screen instructions to choose the specifics of your desired counterpoint generation
* Open www.hacklily.org in your browser
* Copy the text in the generated output file
* Paste it in the broswer window
* Admire the beauty (and click the play button at the top if you wish)


# Coding Style Standards

> Commenting Conventions
 * For anything that is not done yet, is currently being worked on, or needs to be done, please mark with a //TODO comment; don't use //FIXME, as Visual Studio will recognize //TODO comments and format them differently and they will also show up in the task list explorer so it is easy to see what needs to be done and where etc.  Other recognized keywords are HACK, TODO, UNDONE, and UnresolvedMergeConflict.
 * To view the task list explorer, you can use the keyboard shortcut CTRL+\,T or go to the menu at the top and select view, then other windows, and then task list near the bottom.
 * Double clicking on any todo item in the task list will take you to the location of that item
 * All comments will start with a space and capital letter after the //  Ie. "// Like this"

> Naming Conventions
 * All standard variables will be named using camelCase
 * All classes will be named using UpperCamelCase
 * All global variables will be ALL_CAPS
 * Most all braces and indentations will follow K&R style
 There are many more of these types of things we can choose what we want to follow, it's just helpful to follow a standard as the code looks better and is easier to read and understand, for example all methods (functions within a class) may follow one naming conventions while all functions (outside of classes) may follow another so it is easy to tell if a given function is part of a class or not.  Also can be useful to tell if some given name is an enum or a class or a struct etc. with just a glance based off of the naming convention followed.

> Documentation
 * All code and function documentation will be done using Doxygen tags -- this is again because it integrates nicely with Visual Studio.
 * For example. when you are writing code to call a function or are hovering over a function, VS will show you what that function does, its description, its pre and post conditions, what it returns, and a description of each parameter and its purpose etc. or whatever else you have documented about it using the doxygen tags.
	The full list of available tags can be found here: http://www.doxygen.nl/manual/commands.html
	But the main ones we will use are:
	@brief - http://www.doxygen.nl/manual/commands.html#cmdbrief
	@param <parameter name> - http://www.doxygen.nl/manual/commands.html#cmdparam
	@return - http://www.doxygen.nl/manual/commands.html#cmdreturn
	@pre - http://www.doxygen.nl/manual/commands.html#cmdpre
	@post - http://www.doxygen.nl/manual/commands.html#cmdpost
	Note: the comment will need to be of the style that starts with "/ **" (without spaces) for these tags to work properly -- see below for an example


# Known bugs
* While the program functionally works fine as it is, there is a small "bug" in that the generated output is not always exactly how it would be written in normal music.  While the notes written and pitches produced are correct, this program will write a sharp instead of a flat for some notes in some flat keys.  The reason for this is known, but as it wasn't a functional limitation to the program, it was lower priority and didn't get fixed in time.
* There is also a bug where some notes are sometimes put in the wrong octave.  This can then break the logic for the counterpoint generation of future notes.
