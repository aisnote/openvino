// Copyright (C) 2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include "functional_test_utils/layer_test_utils.hpp"

typedef std::tuple<
        InferenceEngine::Precision,
        InferenceEngine::Precision,    // Input precision
        InferenceEngine::Precision,    // Output precision
        InferenceEngine::Layout,       // Input layout
        InferenceEngine::SizeVector,
        InferenceEngine::SizeVector,
        bool,
        bool,
        ngraph::helpers::InputLayerType,
        LayerTestsUtils::TargetDevice
> MatMulLayerTestParamsSet;

namespace LayerTestsDefinitions {

class MatMulTest : public testing::WithParamInterface<MatMulLayerTestParamsSet>, virtual public LayerTestsUtils::LayerTestsCommon {
public:
    static std::string getTestCaseName(const testing::TestParamInfo<MatMulLayerTestParamsSet> &obj);

protected:
    void SetUp() override;
};

}  // namespace LayerTestsDefinitions
