// 版权所有©XINGJI Studios 2017-2024 保留所有权利。
// XJ380图像头文件
#ifndef _FBC_HPP_
#define _FBC_HPP_

#include "../global/stdint.h"

enum PixelFormat {
    kRGBR, // 带k表示内核会用到
    kBGRR
}; // only支持这两种

struct FrameBufferConfig {
    uint8_t *frame_buffer;
    uint32_t pixels_per_scan_line;
    uint32_t horizontal_resolution;
    uint32_t vertical_resolution;
    enum PixelFormat pixel_format;
};

#endif
