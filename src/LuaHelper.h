#pragma once

struct lua_State;
struct THFloatTensor;
struct THDoubleTensor;
struct THByteTensor;

void dumpStack(lua_State *L);

void *getGlobal1(lua_State *L, const char *name1);
void *getGlobal2(lua_State *L, const char *name1, const char *name2);

void pushGlobal(lua_State *L, const char *name1);
void pushGlobal(lua_State *L, const char *name1, const char *name2);
void pushGlobal(lua_State *L, const char *name1, const char *name2, const char *name3);

void popAsSelf(lua_State *L, void *instanceKey);
void deleteSelf(lua_State *L, void *instanceKey);
void pushSelf(lua_State *L, void *instanceKey);
void getInstanceField(lua_State *L, void *instanceKey, const char *name);
const char * popString(lua_State *L);
float popFloat(lua_State *L);

void pushFloatTensor(lua_State *L, THFloatTensor *tensor);
THFloatTensor *popFloatTensor(lua_State *L);

void pushDoubleTensor(lua_State *L, THDoubleTensor *tensor);
THDoubleTensor *popDoubleTensor(lua_State *L);

void pushByteTensor(lua_State *L, THByteTensor *tensor);
THByteTensor *popByteTensor(lua_State *L);

void luaRequire(lua_State *L, const char *name);

int getLuaRegistryIndex();

