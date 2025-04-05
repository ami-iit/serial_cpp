/*!
 * \file serial/serial.h
 *
 * \section LICENSE
 *
 * The MIT License
 *
 * Copyright (c) Fondazione Istituto Italiano di Tecnologia
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * \section DESCRIPTION
 *
 * This file can be included to provide drop-in compatibility with the wjwwood/serial
 * library on which serial_cpp is based.
 */

#ifndef SERIAL_CPP_SERIAL_COMPAT_H
#define SERIAL_CPP_SERIAL_COMPAT_H

#include <serial_cpp/serial.h>

namespace serial {

typedef serial_cpp::Serial Serial;
typedef serial_cpp::SerialException SerialException;
typedef serial_cpp::IOException IOException;
typedef serial_cpp::PortNotOpenedException PortNotOpenedException;
typedef serial_cpp::Timeout Timeout;
typedef serial_cpp::PortInfo PortInfo;
typedef serial_cpp::bytesize_t bytesize_t;
typedef serial_cpp::parity_t parity_t;
typedef serial_cpp::stopbits_t stopbits_t;
typedef serial_cpp::flowcontrol_t flowcontrol_t;

inline std::vector<PortInfo> list_ports()
{
    return serial_cpp::list_ports();
}

}

#endif


