/*
 * Copyright (c) 2018-2019, The Mybtcfx Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of 4xBIT.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "AddBlockErrorCondition.h"

namespace CryptoNote {
namespace error {

AddBlockErrorConditionCategory AddBlockErrorConditionCategory::INSTANCE;


std::error_condition make_error_condition(AddBlockErrorCondition e) {
  return std::error_condition(
      static_cast<int>(e),
      AddBlockErrorConditionCategory::INSTANCE);
}

}
}
