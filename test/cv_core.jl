module OpenCV
# using StaticArrays

include("typestructs.jl")
include("Vec.jl")
const dtypes = Union{UInt8, Int8, UInt16, Int16, Int32, Float32, Float64}
size_t = UInt64

using CxxWrap
@wrapmodule(joinpath("lib","libcv2_jl"), :cv_wrap)
function __init__()
    @initcxx
end
const Scalar = Union{Tuple{Number}, Tuple{Number, Number}, Tuple{Number, Number, Number}, NTuple{4, Number}}

include("Mat.jl")

const Image = Union{Mat{A} where {A}, SubArray{T2, N, Mat{A}, T} where {N, A, T, T2 <: dtypes}, CxxMat}

include("mat_conversion.jl")
include("types_conversion.jl")

function cpp_to_julia(var)
    return var
end
function julia_to_cpp(var)
    return var
end


function julia_to_cpp(var::Array{T, 1}) where {T}
    ret = CxxWrap.StdLib.StdVector{T}()
    for x in var
        push!(ret, julia_to_cpp(x)) # When converting an array keep expected type as final type. 
    end
    return ret
end

function cpp_to_julia(var::CxxWrap.StdLib.StdVector{T}) where {T}
    ret = Array{T, 1}()
    for x in var
        push!(ret, cpp_to_julia(x))
    end
    return ret
end


include("cv_wrap.jl")
end