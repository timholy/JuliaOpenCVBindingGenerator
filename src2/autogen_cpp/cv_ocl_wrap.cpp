#include "jlcv2.hpp"

namespace jlcxx
{



} // namespace jlcxx

JLCXX_MODULE ocl_wrap(jlcxx::Module &mod) {
using namespace cv::ocl;
mod.add_type<cv::ocl::Device>("ocl_Device");

    mod.add_bits<cv::ocl::OclVectorStrategy>("OclVectorStrategy", jlcxx::julia_type("CppEnum"));mod.method("ocl_Device", []() {return jlcxx::create<cv::ocl::Device>();});

;
    mod.method("jlopencv_cv_ocl_Device_name",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::name();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_extensions",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::extensions();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_isExtensionSupported",  [](Device& cobj, string& extensionName) { auto retval = cobj.cv::ocl::Device::isExtensionSupported(extensionName);  return retval;});
    mod.method("jlopencv_cv_ocl_Device_version",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::version();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_vendorName",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::vendorName();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_OpenCL_C_Version",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::OpenCL_C_Version();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_OpenCLVersion",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::OpenCLVersion();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_deviceVersionMajor",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::deviceVersionMajor();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_deviceVersionMinor",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::deviceVersionMinor();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_driverVersion",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::driverVersion();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_type",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::type();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_addressBits",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::addressBits();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_available",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::available();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_compilerAvailable",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::compilerAvailable();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_linkerAvailable",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::linkerAvailable();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_doubleFPConfig",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::doubleFPConfig();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_singleFPConfig",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::singleFPConfig();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_halfFPConfig",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::halfFPConfig();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_endianLittle",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::endianLittle();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_errorCorrectionSupport",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::errorCorrectionSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_executionCapabilities",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::executionCapabilities();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_globalMemCacheSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemCacheSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_globalMemCacheType",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemCacheType();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_globalMemCacheLineSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemCacheLineSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_globalMemSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_localMemSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::localMemSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_localMemType",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::localMemType();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_hostUnifiedMemory",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::hostUnifiedMemory();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_imageSupport",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::imageSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_imageFromBufferSupport",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::imageFromBufferSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_intelSubgroupsSupport",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::intelSubgroupsSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_image2DMaxWidth",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::image2DMaxWidth();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_image2DMaxHeight",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::image2DMaxHeight();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_image3DMaxWidth",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::image3DMaxWidth();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_image3DMaxHeight",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::image3DMaxHeight();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_image3DMaxDepth",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::image3DMaxDepth();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_imageMaxBufferSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::imageMaxBufferSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_imageMaxArraySize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::imageMaxArraySize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_vendorID",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::vendorID();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_isAMD",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::isAMD();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_isIntel",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::isIntel();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_isNVidia",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::isNVidia();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxClockFrequency",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxClockFrequency();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxComputeUnits",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxComputeUnits();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxConstantArgs",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxConstantArgs();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxConstantBufferSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxConstantBufferSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxMemAllocSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxMemAllocSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxParameterSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxParameterSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxReadImageArgs",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxReadImageArgs();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxWriteImageArgs",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxWriteImageArgs();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxSamplers",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxSamplers();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxWorkGroupSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxWorkGroupSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_maxWorkItemDims",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::maxWorkItemDims();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_memBaseAddrAlign",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::memBaseAddrAlign();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_nativeVectorWidthChar",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthChar();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_nativeVectorWidthShort",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthShort();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_nativeVectorWidthInt",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthInt();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_nativeVectorWidthLong",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthLong();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_nativeVectorWidthFloat",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthFloat();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_nativeVectorWidthDouble",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthDouble();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_nativeVectorWidthHalf",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthHalf();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_preferredVectorWidthChar",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthChar();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_preferredVectorWidthShort",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthShort();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_preferredVectorWidthInt",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthInt();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_preferredVectorWidthLong",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthLong();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_preferredVectorWidthFloat",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthFloat();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_preferredVectorWidthDouble",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthDouble();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_preferredVectorWidthHalf",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthHalf();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_printfBufferSize",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::printfBufferSize();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_profilingTimerResolution",  [](Device& cobj) { auto retval = cobj.cv::ocl::Device::profilingTimerResolution();  return retval;});
    mod.method("jlopencv_cv_ocl_Device_getDefault",  []() { auto retval = cv::ocl::Device::getDefault(); return retval;});
    mod.method("jlopencv_cv_ocl_haveOpenCL",  []() { auto retval = cv::ocl::haveOpenCL(); return retval;});
    mod.method("jlopencv_cv_ocl_useOpenCL",  []() { auto retval = cv::ocl::useOpenCL(); return retval;});
    mod.method("jlopencv_cv_ocl_haveAmdBlas",  []() { auto retval = cv::ocl::haveAmdBlas(); return retval;});
    mod.method("jlopencv_cv_ocl_haveAmdFft",  []() { auto retval = cv::ocl::haveAmdFft(); return retval;});
    mod.method("jlopencv_cv_ocl_setUseOpenCL",  [](bool& flag) { cv::ocl::setUseOpenCL(flag); ;});
    mod.method("jlopencv_cv_ocl_finish",  []() { cv::ocl::finish(); ;});
    mod.method("jlopencv_cv_ocl_Device_getDefault",  []() { auto retval = cv::ocl::Device::getDefault(); return retval;});    mod.set_const("Device_EXEC_KERNEL", cv::ocl::Device::EXEC_KERNEL);
    mod.set_const("DEVICE_EXEC_KERNEL", cv::ocl::Device::EXEC_KERNEL);
    mod.set_const("Device_EXEC_NATIVE_KERNEL", cv::ocl::Device::EXEC_NATIVE_KERNEL);
    mod.set_const("DEVICE_EXEC_NATIVE_KERNEL", cv::ocl::Device::EXEC_NATIVE_KERNEL);
    mod.set_const("Device_FP_CORRECTLY_ROUNDED_DIVIDE_SQRT", cv::ocl::Device::FP_CORRECTLY_ROUNDED_DIVIDE_SQRT);
    mod.set_const("DEVICE_FP_CORRECTLY_ROUNDED_DIVIDE_SQRT", cv::ocl::Device::FP_CORRECTLY_ROUNDED_DIVIDE_SQRT);
    mod.set_const("Device_FP_DENORM", cv::ocl::Device::FP_DENORM);
    mod.set_const("DEVICE_FP_DENORM", cv::ocl::Device::FP_DENORM);
    mod.set_const("Device_FP_FMA", cv::ocl::Device::FP_FMA);
    mod.set_const("DEVICE_FP_FMA", cv::ocl::Device::FP_FMA);
    mod.set_const("Device_FP_INF_NAN", cv::ocl::Device::FP_INF_NAN);
    mod.set_const("DEVICE_FP_INF_NAN", cv::ocl::Device::FP_INF_NAN);
    mod.set_const("Device_FP_ROUND_TO_INF", cv::ocl::Device::FP_ROUND_TO_INF);
    mod.set_const("DEVICE_FP_ROUND_TO_INF", cv::ocl::Device::FP_ROUND_TO_INF);
    mod.set_const("Device_FP_ROUND_TO_NEAREST", cv::ocl::Device::FP_ROUND_TO_NEAREST);
    mod.set_const("DEVICE_FP_ROUND_TO_NEAREST", cv::ocl::Device::FP_ROUND_TO_NEAREST);
    mod.set_const("Device_FP_ROUND_TO_ZERO", cv::ocl::Device::FP_ROUND_TO_ZERO);
    mod.set_const("DEVICE_FP_ROUND_TO_ZERO", cv::ocl::Device::FP_ROUND_TO_ZERO);
    mod.set_const("Device_FP_SOFT_FLOAT", cv::ocl::Device::FP_SOFT_FLOAT);
    mod.set_const("DEVICE_FP_SOFT_FLOAT", cv::ocl::Device::FP_SOFT_FLOAT);
    mod.set_const("Device_LOCAL_IS_GLOBAL", cv::ocl::Device::LOCAL_IS_GLOBAL);
    mod.set_const("DEVICE_LOCAL_IS_GLOBAL", cv::ocl::Device::LOCAL_IS_GLOBAL);
    mod.set_const("Device_LOCAL_IS_LOCAL", cv::ocl::Device::LOCAL_IS_LOCAL);
    mod.set_const("DEVICE_LOCAL_IS_LOCAL", cv::ocl::Device::LOCAL_IS_LOCAL);
    mod.set_const("Device_NO_CACHE", cv::ocl::Device::NO_CACHE);
    mod.set_const("DEVICE_NO_CACHE", cv::ocl::Device::NO_CACHE);
    mod.set_const("Device_NO_LOCAL_MEM", cv::ocl::Device::NO_LOCAL_MEM);
    mod.set_const("DEVICE_NO_LOCAL_MEM", cv::ocl::Device::NO_LOCAL_MEM);
    mod.set_const("Device_READ_ONLY_CACHE", cv::ocl::Device::READ_ONLY_CACHE);
    mod.set_const("DEVICE_READ_ONLY_CACHE", cv::ocl::Device::READ_ONLY_CACHE);
    mod.set_const("Device_READ_WRITE_CACHE", cv::ocl::Device::READ_WRITE_CACHE);
    mod.set_const("DEVICE_READ_WRITE_CACHE", cv::ocl::Device::READ_WRITE_CACHE);
    mod.set_const("Device_TYPE_ACCELERATOR", cv::ocl::Device::TYPE_ACCELERATOR);
    mod.set_const("DEVICE_TYPE_ACCELERATOR", cv::ocl::Device::TYPE_ACCELERATOR);
    mod.set_const("Device_TYPE_ALL", cv::ocl::Device::TYPE_ALL);
    mod.set_const("DEVICE_TYPE_ALL", cv::ocl::Device::TYPE_ALL);
    mod.set_const("Device_TYPE_CPU", cv::ocl::Device::TYPE_CPU);
    mod.set_const("DEVICE_TYPE_CPU", cv::ocl::Device::TYPE_CPU);
    mod.set_const("Device_TYPE_DEFAULT", cv::ocl::Device::TYPE_DEFAULT);
    mod.set_const("DEVICE_TYPE_DEFAULT", cv::ocl::Device::TYPE_DEFAULT);
    mod.set_const("Device_TYPE_DGPU", cv::ocl::Device::TYPE_DGPU);
    mod.set_const("DEVICE_TYPE_DGPU", cv::ocl::Device::TYPE_DGPU);
    mod.set_const("Device_TYPE_GPU", cv::ocl::Device::TYPE_GPU);
    mod.set_const("DEVICE_TYPE_GPU", cv::ocl::Device::TYPE_GPU);
    mod.set_const("Device_TYPE_IGPU", cv::ocl::Device::TYPE_IGPU);
    mod.set_const("DEVICE_TYPE_IGPU", cv::ocl::Device::TYPE_IGPU);
    mod.set_const("Device_UNKNOWN_VENDOR", cv::ocl::Device::UNKNOWN_VENDOR);
    mod.set_const("DEVICE_UNKNOWN_VENDOR", cv::ocl::Device::UNKNOWN_VENDOR);
    mod.set_const("Device_VENDOR_AMD", cv::ocl::Device::VENDOR_AMD);
    mod.set_const("DEVICE_VENDOR_AMD", cv::ocl::Device::VENDOR_AMD);
    mod.set_const("Device_VENDOR_INTEL", cv::ocl::Device::VENDOR_INTEL);
    mod.set_const("DEVICE_VENDOR_INTEL", cv::ocl::Device::VENDOR_INTEL);
    mod.set_const("Device_VENDOR_NVIDIA", cv::ocl::Device::VENDOR_NVIDIA);
    mod.set_const("DEVICE_VENDOR_NVIDIA", cv::ocl::Device::VENDOR_NVIDIA);
    mod.set_const("KernelArg_CONSTANT", cv::ocl::KernelArg::CONSTANT);
    mod.set_const("KERNEL_ARG_CONSTANT", cv::ocl::KernelArg::CONSTANT);
    mod.set_const("KernelArg_LOCAL", cv::ocl::KernelArg::LOCAL);
    mod.set_const("KERNEL_ARG_LOCAL", cv::ocl::KernelArg::LOCAL);
    mod.set_const("KernelArg_NO_SIZE", cv::ocl::KernelArg::NO_SIZE);
    mod.set_const("KERNEL_ARG_NO_SIZE", cv::ocl::KernelArg::NO_SIZE);
    mod.set_const("KernelArg_PTR_ONLY", cv::ocl::KernelArg::PTR_ONLY);
    mod.set_const("KERNEL_ARG_PTR_ONLY", cv::ocl::KernelArg::PTR_ONLY);
    mod.set_const("KernelArg_READ_ONLY", cv::ocl::KernelArg::READ_ONLY);
    mod.set_const("KERNEL_ARG_READ_ONLY", cv::ocl::KernelArg::READ_ONLY);
    mod.set_const("KernelArg_READ_WRITE", cv::ocl::KernelArg::READ_WRITE);
    mod.set_const("KERNEL_ARG_READ_WRITE", cv::ocl::KernelArg::READ_WRITE);
    mod.set_const("KernelArg_WRITE_ONLY", cv::ocl::KernelArg::WRITE_ONLY);
    mod.set_const("KERNEL_ARG_WRITE_ONLY", cv::ocl::KernelArg::WRITE_ONLY);
    mod.set_const("OCL_VECTOR_DEFAULT", cv::ocl::OCL_VECTOR_DEFAULT);
    mod.set_const("OCL_VECTOR_MAX", cv::ocl::OCL_VECTOR_MAX);
    mod.set_const("OCL_VECTOR_OWN", cv::ocl::OCL_VECTOR_OWN);
}

