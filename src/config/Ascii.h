// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n BBBBBBBBBBBBBBBBB                     lllllll \n"                                               
			  "B::::::::::::::::B                    l:::::l                                                         \n"
			  "B::::::BBBBBB:::::B                   l:::::l                                                         \n"
			  "BB:::::B     B:::::B                  l:::::l                                                         \n"
			    "  B::::B     B:::::B  aaaaaaaaaaaaa    l::::l     eeeeeeeeeeee    nnnn  nnnnnnnn       ooooooooooo    \n"
			    "  B::::B     B:::::B  a::::::::::::a   l::::l   ee::::::::::::ee  n:::nn::::::::nn   oo:::::::::::oo  \n"
			    "  B::::BBBBBB:::::B   aaaaaaaaa:::::a  l::::l  e::::::eeeee:::::een::::::::::::::nn o:::::::::::::::o \n"
			    "  B:::::::::::::BB             a::::a  l::::l e::::::e     e:::::enn:::::::::::::::no:::::ooooo:::::o \n"
			    "  B::::BBBBBB:::::B     aaaaaaa:::::a  l::::l e:::::::eeeee::::::e  n:::::nnnn:::::no::::o     o::::o \n"
			    "  B::::B     B:::::B  aa::::::::::::a  l::::l e:::::::::::::::::e   n::::n    n::::no::::o     o::::o \n"
			    "  B::::B     B:::::B a::::aaaa::::::a  l::::l e::::::eeeeeeeeeee    n::::n    n::::no::::o     o::::o \n"
			    "  B::::B     B:::::Ba::::a    a:::::a  l::::l e:::::::e             n::::n    n::::no::::o     o::::o \n"
			  "BB:::::BBBBBB::::::Ba::::a    a:::::a l::::::le::::::::e            n::::n    n::::no:::::ooooo:::::o \n"
			  "B:::::::::::::::::B a:::::aaaa::::::a l::::::l e::::::::eeeeeeee    n::::n    n::::no:::::::::::::::o \n"
			  "B::::::::::::::::B   a::::::::::aa:::al::::::l  ee:::::::::::::e    n::::n    n::::n oo:::::::::::oo  \n"
	  "BBBBBBBBBBBBBBBBB     aaaaaaaaaa  aaaallllllll    eeeeeeeeeeeeee    nnnnnn    nnnnnn   ooooooooooo   \n";
                                                   
                                                   
                                                   
	
const std::string nonWindowsAsciiArt = 
      "\n        											 \n"
		"██████╗  █████╗ ██╗     ███████╗███╗   ██╗ ██████╗  \n"
		"██╔══██╗██╔══██╗██║     ██╔════╝████╗  ██║██╔═══██╗ \n"
		"██████╔╝███████║██║     █████╗  ██╔██╗ ██║██║   ██║ \n"
		"██╔══██╗██╔══██║██║     ██╔══╝  ██║╚██╗██║██║   ██║ \n"
		"██████╔╝██║  ██║███████╗███████╗██║ ╚████║╚██████╔╝ \n"
		"╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═══╝ ╚═════╝  \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
