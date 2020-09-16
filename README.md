                                                                    Commands

whoami      Shows current user
who         Shows name of the user who is logged in, their current enviroment, and date from which this session has started.
man         Manual for the command (use before the command)
uname       Shows the name of OS
    -a      show long name of the current distribution of the OS
cd          Go-to directory
    ./       it is your current place (shown as file)
    ../      it is used to go up a directory (back)
    ~/       it is user's home directory (default)
pwd         Shows current directory
ls          List the contents of the directory
dir         Same as ls?
    -a        shows all entries (Hidden Files starting with .)
    -l        show the long name of the directory 
              ex. drwxr-xr-x 38 evaldas evaldas   4096 Sep 14 11:05  .
                  0123456789 xx owner   group     size  last edit 
                 *0 Shows the filetype            *123 Permissions of the file owner         "r" - read
                  d  directory                    *456 Permissions of the group members      "w" - write
                  l  link                         *789 Permissions of other users            "x" - execute
                  -  n/a - there is no name?      * xx shows the number of contents          "-" - not permited
                  
clear       Clear the terminal window
history     Show the history of commands

echo $0     Shows your current shell.
sh          Sets terminal to sh shell.
    sh shell uses a lot less memory because it doesn't have definitions for certain commands and other quality of life improvements.
bash        Sets terminal to bash shell(default).

                                                                    Hotkeys

  Main hotkeys:
    Ctrl+Alt+T    Open terminal
  BASH
    ArrowUp     goes back in the list of typed commands.
    ArrowDown   goes to the front in the list of typed commands.
    Tab         shows the list of commands according to your current entry, assumes what command you will use.
    Ctrl+L      Clears the screen.
