# The name of the games
SRCS     = LuaHashMap.c
LIB      = lib-kbench-luahashmap.a
MAINSRCS = run-luahashmap.c

INCLUDE += `pkg-config --cflags lua`
SYSLIBS += `pkg-config --libs lua`

include ../../etc/Make.rules
