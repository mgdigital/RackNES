//  Program:      nes-py
//  File:         common.hpp
//  Description:  This file defines common types used in the project
//
//  Copyright (c) 2019 Christian Kauten. All rights reserved.
//

#ifndef NES_COMMON_HPP
#define NES_COMMON_HPP

// resolve an issue with MSVC overflow during compilation (Windows)
#define _CRT_DECLARE_NONSTDC_NAMES 0
#include <cstdint>
#include <functional>

namespace NES {

/// A shortcut for a byte
typedef uint8_t NES_Byte;
/// A shortcut for a memory address (16-bit)
typedef uint16_t NES_Address;
/// A shortcut for a single pixel in memory
typedef uint32_t NES_Pixel;
/// a type definition for a basic callback method
typedef std::function<void(void)> Callback;

}  // namespace NES

#endif  // NES_COMMON_HPP
