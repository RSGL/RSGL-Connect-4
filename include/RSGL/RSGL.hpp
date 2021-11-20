#ifdef __3DS__
    #include "include/3ds.hpp"
#endif
#ifdef wii
    #include "include/wii.hpp"
#endif
#ifdef WIN32
    #include "include/win.hpp"
#endif
#if __linux__
    #include "include/linux.hpp"
#endif
#if __APPLE__
    #include "include/linux.hpp"
#endif
