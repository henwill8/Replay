#include "static-defines.hpp"

#include "includes/bs-utils/shared/utils.hpp"

namespace Replay {
    class ReplayRecorder {
    private:
        const static std::string tempFilePath = bs_utils::getDataDir(modInfo) + "/temp/";
    public:
        ReplayRecorder();

        std::ofstream tempFile;
    }
}