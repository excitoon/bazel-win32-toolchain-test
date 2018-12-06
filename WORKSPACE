load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "windows_cc_config_init",
    remote = "https://github.com/excitoon/bazel-win32-toolchain",
    commit = "40000006ca052634bed4a870e89cecf957ea3344"
)

load("@windows_cc_config_init//:windows_toolchain.bzl", "windows_toolchain")
windows_toolchain(
    name = "windows_cc_config"
)
