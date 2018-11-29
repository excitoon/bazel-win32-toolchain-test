new_git_repository(
    name = "windows_cc_config_init",
    build_file_content = "",
    remote = "https://github.com/excitoon/bazel-win32-toolchain",
    commit = "0000000eec760512c47a452145ec748e85865331"
)

load("@windows_cc_config_init//:windows_toolchain.bzl", "windows_toolchain")
windows_toolchain(
    name = "windows_cc_config"
)
