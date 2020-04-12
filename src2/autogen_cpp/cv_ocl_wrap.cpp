#include "jlcv2.hpp"

namespace jlcxx
{



} // namespace jlcxx

JLCXX_MODULE cv_ocl_wrap(jlcxx::Module &mod) {
using namespace cv::ocl;
mod.add_type<cv::ocl::Device>("Device");

    mod.add_bits<cv::ocl::OclVectorStrategy>("OclVectorStrategy", jlcxx::julia_type("CppEnum"));   mod.add_type<Device>("Device");
mod.method("Device", []() {  return jlcxx::create<cv::ocl::Device>();});

;
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_name",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::name();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_extensions",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::extensions();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_isExtensionSupported",  [](cv::ocl::Device& cobj, string& extensionName) { auto retval = cobj.cv::ocl::Device::isExtensionSupported(extensionName);  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_version",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::version();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_vendorName",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::vendorName();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_OpenCL_C_Version",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::OpenCL_C_Version();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_OpenCLVersion",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::OpenCLVersion();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_deviceVersionMajor",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::deviceVersionMajor();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_deviceVersionMinor",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::deviceVersionMinor();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_driverVersion",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::driverVersion();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_type",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::type();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_addressBits",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::addressBits();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_available",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::available();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_compilerAvailable",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::compilerAvailable();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_linkerAvailable",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::linkerAvailable();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_doubleFPConfig",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::doubleFPConfig();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_singleFPConfig",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::singleFPConfig();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_halfFPConfig",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::halfFPConfig();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_endianLittle",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::endianLittle();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_errorCorrectionSupport",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::errorCorrectionSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_executionCapabilities",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::executionCapabilities();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_globalMemCacheSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemCacheSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_globalMemCacheType",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemCacheType();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_globalMemCacheLineSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemCacheLineSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_globalMemSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::globalMemSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_localMemSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::localMemSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_localMemType",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::localMemType();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_hostUnifiedMemory",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::hostUnifiedMemory();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_imageSupport",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::imageSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_imageFromBufferSupport",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::imageFromBufferSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_intelSubgroupsSupport",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::intelSubgroupsSupport();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_image2DMaxWidth",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::image2DMaxWidth();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_image2DMaxHeight",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::image2DMaxHeight();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_image3DMaxWidth",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::image3DMaxWidth();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_image3DMaxHeight",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::image3DMaxHeight();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_image3DMaxDepth",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::image3DMaxDepth();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_imageMaxBufferSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::imageMaxBufferSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_imageMaxArraySize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::imageMaxArraySize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_vendorID",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::vendorID();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_isAMD",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::isAMD();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_isIntel",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::isIntel();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_isNVidia",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::isNVidia();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxClockFrequency",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxClockFrequency();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxComputeUnits",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxComputeUnits();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxConstantArgs",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxConstantArgs();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxConstantBufferSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxConstantBufferSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxMemAllocSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxMemAllocSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxParameterSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxParameterSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxReadImageArgs",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxReadImageArgs();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxWriteImageArgs",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxWriteImageArgs();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxSamplers",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxSamplers();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxWorkGroupSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxWorkGroupSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_maxWorkItemDims",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::maxWorkItemDims();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_memBaseAddrAlign",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::memBaseAddrAlign();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_nativeVectorWidthChar",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthChar();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_nativeVectorWidthShort",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthShort();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_nativeVectorWidthInt",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthInt();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_nativeVectorWidthLong",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthLong();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_nativeVectorWidthFloat",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthFloat();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_nativeVectorWidthDouble",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthDouble();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_nativeVectorWidthHalf",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::nativeVectorWidthHalf();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_preferredVectorWidthChar",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthChar();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_preferredVectorWidthShort",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthShort();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_preferredVectorWidthInt",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthInt();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_preferredVectorWidthLong",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthLong();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_preferredVectorWidthFloat",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthFloat();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_preferredVectorWidthDouble",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthDouble();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_preferredVectorWidthHalf",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::preferredVectorWidthHalf();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_printfBufferSize",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::printfBufferSize();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_cv_ocl_Device_profilingTimerResolution",  [](cv::ocl::Device& cobj) { auto retval = cobj.cv::ocl::Device::profilingTimerResolution();  return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_haveOpenCL",  []() { auto retval = cv::ocl::haveOpenCL(); return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_useOpenCL",  []() { auto retval = cv::ocl::useOpenCL(); return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_haveAmdBlas",  []() { auto retval = cv::ocl::haveAmdBlas(); return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_haveAmdFft",  []() { auto retval = cv::ocl::haveAmdFft(); return retval;});
    mod.method("jlopencv_cv_ocl_cv_ocl_setUseOpenCL",  [](bool& flag) { cv::ocl::setUseOpenCL(flag); ;});
    mod.method("jlopencv_cv_ocl_cv_ocl_finish",  []() { cv::ocl::finish(); ;});
    mod.method("jlopencv_cv_ocl_cv_ocl_Device_getDefault",  []() { auto retval = cv::ocl::Device::getDefault(); return retval;});    mod.set_const("Device_EXEC_KERNEL", cv::ocl::Device::EXEC_KERNEL);
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

