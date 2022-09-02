# bazel-issue-sw

This is a repository to reproduce an error in `bazel`. This repository shows no error. The companion-repository [`bazel-issue-tests`](https://github.com/celkas/bazel-issue-tests/) will not work though.

Usage:
```
bazel build -c dbg //:funclib
bazel build -c dbg //:mytest
bazel coverage -c dbg --combined_report=lcov --instrumentation_filter="//:funclib" --action_env=COVERAGE_GCOV_OPTIONS=-b //:mytest
genhtml --branch-coverage --output html "$(bazel info output_path)/_coverage/_coverage_report.dat"
# => lines......: 53.8% (7 of 13 lines)
# => functions..: 100.0% (1 of 1 function)
# => branches...: 33.3% (1 of 3 branches)
```
