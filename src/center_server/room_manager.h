#ifndef ROOM_MANAGER_H_
#define ROOM_MANAGER_H_

#include <common.h>
#include <manager.h>
#include "room.h"
#include "room_pool.h"

class RoomManager
    : public Venus::Singleton<RoomManager>
{
    static const int MAX_ROOM = 1000;
    static const int MAX_ROOM_PLAYERS = 4;
    static const uint32 ADD_ROOM_FAILED = 0;

public:
    RoomManager();
    ~RoomManager();
public:
    bool init();
    void destroy();

    //////////////////////////////////////////////////////////////////////////
    // 描述:添加一个room 按照自然数顺序优先选择未使用id
    // 返回:失败 return ADD_ROOM_FAILED; 成功 return id;
    //////////////////////////////////////////////////////////////////////////
    uint32 addRoom(const std::string& roomName, const std::string& password, uint64 ownerGuid);
    void removeRoom(uint32 id);
    void getRooms(adap_map<uint32, Room*>& rooms);
    Room* getRoom(uint32 id);
    bool enterRoom(uint32 room_id, uint64 player_id);
    bool leaveRoom(uint32 room_id, uint64 player_id);

private:
    adap_map<uint32, Room*> _rooms;
    std::vector<uint32> _freeIds;
    RoomPool _roomPool;
};

#endif