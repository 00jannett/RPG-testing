#ifndef RENDERER_H
#define RENDERER_H

class Window;

class Renderer {
public:
    virtual ~Renderer() = default;

    virtual void init(Window& window) = 0;
    virtual void drawFrame() = 0;
    virtual void cleanup() = 0;
};
