load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "windows_cc_config_init",
    remote = "https://github.com/excitoon/bazel-win32-toolchain",
    commit = "3000000d0cd4268ff5f64f4a7923a1d8775c2265"
)

load("@windows_cc_config_init//:windows_toolchain.bzl", "windows_toolchain")
windows_toolchain(
    name = "windows_cc_config"
)
