load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "windows_cc_config_init",
    remote = "https://github.com/excitoon/bazel-win32-toolchain",
    commit = "5000000d5dd1fc69df79c33ffe47bed27ae47684"
)

load("@windows_cc_config_init//:windows_toolchain.bzl", "windows_toolchain")
windows_toolchain(
    name = "windows_cc_config"
)
