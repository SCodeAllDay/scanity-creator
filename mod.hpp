#pragma once

class Mod {
public:
    virtual bool init() { return false; }
    virtual bool start() { return false; }
    virtual bool stop() { return false; }
    virtual ~Mod() = default;
};
