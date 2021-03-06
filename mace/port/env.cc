// Copyright 2019 The MACE Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "mace/port/env.h"

#include <sstream>

#include "mace/utils/memory.h"
#include "mace/public/mace.h"

namespace mace {
namespace port {

MaceStatus Env::GetCPUMaxFreq(std::vector<float> *max_freqs) {
  return MaceStatus::MACE_UNSUPPORTED;
}

MaceStatus Env::SchedSetAffinity(const std::vector<size_t> &cpu_ids) {
  return MaceStatus::MACE_UNSUPPORTED;
}

std::unique_ptr<MallocLogger> Env::NewMallocLogger(
      std::ostringstream *oss,
      const std::string &name) {
  return make_unique<MallocLogger>();
}

}  // namespace port
}  // namespace mace
