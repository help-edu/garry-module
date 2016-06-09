# garry-module
Garry's mod module basics

## Connecting to standart lua libary called "lua_shared.dll"
### which is located in {$YourServerDirectory}/garrysmod/bin


Official garry module contains a cut of lua sources. Okaye, restore it.

This sources helps you to create a module for garry's mod without official interface, but with completed lua5.1 official interface. Firstly, you need to convert lua_shared.dll to lua_shared.lib by few basic steps, if you know how to do this, do it like you know. But if you don't know, i'll tell you -> https://adrianhenke.wordpress.com/2008/12/05/create-lib-file-from-dll/

and if you lazy, just use my script https://github.com/help-edu/python-ball/blob/master/convert_to_lib.py or download .lib from this repository
  (если вы достаточно ленивы, тогда можете воспользоваться моим скриптом <ссылка_выше>, либо скачать либу с этого репозитория)

Official C++ module support https://github.com/garrynewman/gmod-module-base
  (Оффициальная поддержка С++ модулей для гмода, использовать не рекомендую)

Lua5.1 includes what we need https://sourceforge.net/projects/luabinaries/files/5.1.4/ (includes only)
  (Lua5.1 включения, которые нам нужны, находятся по адресу <ссылка_выше>)

## Step .1
Convert lua_shared.dll to lua_shared.lib
(Импортировать имена .dll в .lib)

## Step .2
Connect lua_shared.lib to your project (as you know)
(Подключить lua_shared.lib в ваш проект) 

## Step .3
Include lua5.1 like you including anything
(Подключить включения lua5.1 в ваш проект)

## Step .4
Use glua like normal lua machine. Look example.cpp
(Использовать glua как обычную луа машину, смотреть example.cpp)
