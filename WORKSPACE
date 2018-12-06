load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "windows_cc_config_init",
    url = "https://github.com/excitoon/bazel-win32-toolchain/archive/3000000d0cd4268ff5f64f4a7923a1d8775c2265.zip",
    strip_prefix = "bazel-win32-toolchain-3000000d0cd4268ff5f64f4a7923a1d8775c2265",
    sha256 = "87d24d3ba228d23617afae1a4996972f5856c2eaa15b5882fde56e6e377b0964"
)

load("@windows_cc_config_init//:windows_toolchain.bzl", "windows_toolchain")
windows_toolchain(
    name = "windows_cc_config"
)
