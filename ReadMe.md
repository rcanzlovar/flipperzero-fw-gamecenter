# Flipper Zero GameCenter


This is a fork from the default generic flipper repository as of 0.58.1

The screen for locking and setting your PIN has a third option called "DUMB menu". if you select it on a 
vanilla build, you get a message that says "Not implemented". 

We implemented something. 

The plan is to create a screen suitable for a non-reading person to select between a number of games. 
The current work is on a branch called gamecenter. 

This is the whole repository from Flipperone, but here is a list of the files changed from the generic repo:
```
$ tar ztvf flipper-gamecenter.tgz 
-rw-rw-r-- rca/rca        4264 2022-06-01 21:58 applications/desktop/scenes/desktop_scene_dumb.c
-rw-rw-r-- rca/rca        9110 2022-06-01 20:49 applications/desktop/views/desktop_view_dumb.c
-rw-rw-r-- rca/rca         869 2022-06-01 20:37 applications/desktop/views/desktop_view_dumb.h
-rw-rw-r-- rca/rca       12869 2022-06-01 21:04 applications/desktop/desktop.c
-rw-rw-r-- rca/rca        2100 2022-06-01 21:06 applications/desktop/desktop_i.h
-rw-rw-r-- rca/rca        3567 2022-06-01 20:42 applications/desktop/scenes/desktop_scene_lock_menu.c
-rw-rw-r-- rca/rca        5743 2022-06-01 21:34 applications/desktop/scenes/desktop_scene_main.c
-rw-rw-r-- rca/rca        1193 2022-06-01 21:44 applications/desktop/views/desktop_events.h
-rw-rw-r-- rca/rca        4336 2022-06-01 21:42 applications/desktop/views/desktop_view_lock_menu.c
```
