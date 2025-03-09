#include "Calculator.h"
#include <benchmark/benchmark.h>

static void bmAdd(benchmark::State &state) {
    for (auto _: state) {
        benchmark::DoNotOptimize(Calculator::add(2, 3));
    }
}
BENCHMARK(bmAdd);

static void bmSubtract(benchmark::State &state) {
    for (auto _: state) {
        benchmark::DoNotOptimize(Calculator::subtract(5, 3));
    }
}
BENCHMARK(bmSubtract);

static void bmMultiply(benchmark::State &state) {
    for (auto _: state) {
        benchmark::DoNotOptimize(Calculator::multiply(2, 3));
    }
}
BENCHMARK(bmMultiply);

static void bmDivide(benchmark::State &state) {
    for (auto _: state) {
        benchmark::DoNotOptimize(Calculator::divide(10, 2));
    }
}
BENCHMARK(bmDivide);

BENCHMARK_MAIN();