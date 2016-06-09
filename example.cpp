/**
*  Garry's (garrys) mod 13 lua module example.dll
*/

#include <iostream>

extern "C" {
  	#include "lua.h"
  	#include "lualib.h"
	#include "lauxlib.h"
}

DLL_EXPORT int gmod13_open(lua_State *L)
{
  	std::wcout << L"Hello world!" << std::endl;
  
  	luaL_dostring(L, "print('Hello, world!')")

  	lua_getglobal(L, "_VERSION")
  	std::cout << "_VERSION: " 
          	<< lua_tostring(L, -1) << std::endl;
  	lua_pop(L, 1);

	return 0;
}

DLL_EXPORT int gmod13_close(lua_State* state)
{
	return 0;
}

//thats all
