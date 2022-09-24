#include "port.h"

#ifdef __linux
bool key_is_pressed(KeyCode ks) {
    Display* dpy = XOpenDisplay(":0");
    char keys_return[32];
    XQueryKeymap(dpy, keys_return);
    KeyCode kc2 = XKeyCodeToKeycode(dpy, ks);
    bool isPressed = !!(keys_return[kc2 >> 3] & (1 << (kc2 & 7)));
    XCloseDisplay(dpy);
    return isPressed;
}

#endif

#ifdef _WIN32
bool key_is_pressed(KeyCode ks) {
    return GetAsyncKeyState(ks);
}

#endif
