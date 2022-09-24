#ifndef PORT_H__
#define PORT_H__

#ifdef __linux
	#include <unistd.h>
	#include <X11/Xlib.h>
	#include "X11/keysym.h"

	enum KeyCode {
		KEY_UP = XK_Up,
		KEY_DOWN = XK_Down,
		KEY_LEFT = XK_Left,
		KEY_RIGHT = XK_Right,
		KEY_SHIFT_L = XK_Shift_L,
	};
#endif

#ifdef _WIN32
	#include <windows.h>

	enum KeyCode {
		KEY_UP = VK_UP,
		KEY_DOWN = VK_DOWN,
		KEY_LEFT = VK_LEFT,
		KEY_RIGHT = VK_RIGHT,
		KEY_SHIFT_L = VK_LSHIFT,
	};
#endif

bool key_is_pressed(KeyCode ks);


#endif /* PORT_H__ */