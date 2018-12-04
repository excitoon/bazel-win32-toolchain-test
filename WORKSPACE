load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "windows_cc_config_init",
    url = "https://github.com/excitoon/bazel-win32-toolchain/archive/10000005f33b05b887d3090cf94e80ecdcdaae48.zip",
    strip_prefix = "bazel-win32-toolchain-10000005f33b05b887d3090cf94e80ecdcdaae48",
    sha256 = "f218d37bb4824c40ed5555cfcc92ef968075a79248053102ae26ce22e3efac0b"
)

load("@windows_cc_config_init//:windows_toolchain.bzl", "windows_toolchain")
windows_toolchain(
    name = "windows_cc_config"
)
