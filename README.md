elixir-runtime/
│
├── include/
│   │
│   └── elixir/
│       │
│       ├── common.h
│       ├── tensor.h
│       ├── tensor_ops.h
│       ├── allocator.h
│       ├── matmul.h
│       ├── conv2d.h
│       ├── relu.h
│       ├── maxpool.h
│       ├── softmax.h
│       ├── linear.h
│       ├── layer.h
│       ├── network.h
│       ├── image.h
│       ├── detection.h
│       ├── nms.h
│       ├── profiler.h
│       ├── logger.h
│       ├── threadpool.h
│       ├── neon.h
│       ├── quantization.h
│       ├── parser.h
│       └── runtime.h
│
├── src/
│   │
│   ├── core/
│   │   │
│   │   ├── tensor.c
│   │   ├── tensor_ops.c
│   │   ├── allocator.c
│   │   ├── logger.c
│   │   ├── profiler.c
│   │   └── common.c
│   │
│   ├── math/
│   │   │
│   │   ├── matmul.c
│   │   ├── gemm.c
│   │   ├── vector_add.c
│   │   ├── vector_mul.c
│   │   ├── reduction.c
│   │   └── activation_math.c
│   │
│   ├── ops/
│   │   │
│   │   ├── conv2d.c
│   │   ├── relu.c
│   │   ├── sigmoid.c
│   │   ├── tanh.c
│   │   ├── maxpool.c
│   │   ├── avgpool.c
│   │   ├── softmax.c
│   │   ├── flatten.c
│   │   ├── linear.c
│   │   ├── batchnorm.c
│   │   └── concat.c
│   │
│   ├── runtime/
│   │   │
│   │   ├── layer.c
│   │   ├── network.c
│   │   ├── graph.c
│   │   ├── scheduler.c
│   │   ├── executor.c
│   │   ├── runtime.c
│   │   └── memory_planner.c
│   │
│   ├── image/
│   │   │
│   │   ├── image.c
│   │   ├── resize.c
│   │   ├── normalize.c
│   │   ├── color_convert.c
│   │   └── stb_image.h
│   │
│   ├── detection/
│   │   │
│   │   ├── bbox.c
│   │   ├── iou.c
│   │   ├── nms.c
│   │   ├── anchors.c
│   │   └── yolo_decoder.c
│   │
│   ├── parser/
│   │   │
│   │   ├── parser.c
│   │   ├── model_loader.c
│   │   ├── weights_loader.c
│   │   ├── serializer.c
│   │   └── binary_reader.c
│   │
│   ├── backend/
│   │   │
│   │   ├── cpu_backend.c
│   │   ├── neon_backend.c
│   │   ├── openmp_backend.c
│   │   └── backend_registry.c
│   │
│   ├── neon/
│   │   │
│   │   ├── neon_conv.cpp
│   │   ├── neon_relu.cpp
│   │   ├── neon_matmul.cpp
│   │   ├── neon_pool.cpp
│   │   └── neon_utils.cpp
│   │
│   ├── threading/
│   │   │
│   │   ├── threadpool.c
│   │   ├── worker.c
│   │   ├── task_queue.c
│   │   └── sync.c
│   │
│   ├── quantization/
│   │   │
│   │   ├── quantize.c
│   │   ├── dequantize.c
│   │   ├── int8_conv.c
│   │   └── calibration.c
│   │
│   ├── utils/
│   │   │
│   │   ├── timer.c
│   │   ├── file.c
│   │   ├── cli.c
│   │   ├── random.c
│   │   └── checksum.c
│   │
│   └── main.c
│
├── tests/
│   │
│   ├── test_tensor.c
│   ├── test_tensor_ops.c
│   ├── test_matmul.c
│   ├── test_conv2d.c
│   ├── test_relu.c
│   ├── test_maxpool.c
│   ├── test_softmax.c
│   ├── test_allocator.c
│   ├── test_network.c
│   ├── test_iou.c
│   └── test_nms.c
│
├── benchmarks/
│   │
│   ├── benchmark_conv.c
│   ├── benchmark_matmul.c
│   ├── benchmark_relu.c
│   ├── benchmark_allocator.c
│   └── benchmark_neon.cpp
│
├── models/
│   │
│   ├── tinycnn/
│   │   ├── tinycnn.bin
│   │   ├── tinycnn.cfg
│   │   └── labels.txt
│   │
│   ├── tinyyolo/
│   │   ├── tinyyolo.bin
│   │   ├── tinyyolo.cfg
│   │   └── coco.names
│   │
│   └── test_models/
│       └── dummy.bin
│
├── examples/
│   │
│   ├── tensor_example.c
│   ├── matmul_example.c
│   ├── conv_example.c
│   ├── classification_example.c
│   ├── detection_example.c
│   └── webcam_example.cpp
│
├── docs/
│   │
│   ├── architecture.md
│   ├── tensor_layout.md
│   ├── memory_allocator.md
│   ├── runtime_design.md
│   ├── neon_optimization.md
│   ├── object_detection_pipeline.md
│   └── quantization.md
│
├── scripts/
│   │
│   ├── export_weights.py
│   ├── convert_model.py
│   ├── preprocess_image.py
│   └── generate_test_data.py
│
├── assets/
│   │
│   ├── images/
│   ├── inputs/
│   └── outputs/
│
├── third_party/
│   │
│   ├── stb/
│   └── tinycthread/
│
├── build/
│
├── CMakeLists.txt
├── build.sh
├── run.sh
├── .gitignore
├── README.md
└── LICENSE