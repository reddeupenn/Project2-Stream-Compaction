#pragma once

namespace StreamCompaction {
namespace Naive {
    void scan(int n, int *odata, const int *idata);
    float timeKernScan(int n, int *odata, const int *idata);
}
}
