/*
 * Copyright (c) 2018-2019, The Mybtcfx Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of 4xBIT.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <future>

namespace System {

namespace Detail {

template<class T> using Future = std::future<T>;

template<class T> Future<T> async(std::function<T()>&& operation) {
  return std::async(std::launch::async, std::move(operation));
}

}

}
