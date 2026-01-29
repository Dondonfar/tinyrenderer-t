#include "tgaimage.h"

constexpr TGAColor white   = {255, 255, 255, 255}; // BGRA order
constexpr TGAColor green   = {  0, 255,   0, 255};
constexpr TGAColor red     = {  0,   0, 255, 255};
constexpr TGAColor blue    = {255, 128,  64, 255};
constexpr TGAColor yellow  = {  0, 200, 255, 255};

int main(int argc, char** argv) {
    constexpr int width  = 64; // generates 64x64 image
    constexpr int height = 64;
    TGAImage framebuffer(width, height, TGAImage::RGB);

    int ax =  7, ay =  3; // defining points (a, b, c) with x-coordinate and y-coordinate 
    int bx = 12, by = 37;
    int cx = 62, cy = 53;

    framebuffer.set(ax, ay, white); // don't know what this does, don't ask to me yet, still following his tutorial and learning C++
    framebuffer.set(bx, by, white); // for now, this just set a point in the 64x64 space and it color

    framebuffer.write_tga_file("framebuffer.tga"); // generate image
    return 0;
}