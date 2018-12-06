load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "windows_cc_config_init",
    url = "https://github.com/excitoon/bazel-win32-toolchain/archive/200000054b788fcd81f307643f5464cc035843e1.zip",
    strip_prefix = "bazel-win32-toolchain-200000054b788fcd81f307643f5464cc035843e1",
    sha256 = "e7c9bfabaff53dc1a8bcd983accf7188665005089a83f191ccaadd1687414317"
)

load("@windows_cc_config_init//:windows_toolchain.bzl", "windows_toolchain")
windows_toolchain(
    name = "windows_cc_config"
)
