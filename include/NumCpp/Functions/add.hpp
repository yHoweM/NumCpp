/// @file
/// @author David Pilger <dpilger26@gmail.com>
/// [GitHub Repository](https://github.com/dpilger26/NumCpp)
/// @version 2.0.0
///
/// @section License
/// Copyright 2020 David Pilger
///
/// Permission is hereby granted, free of charge, to any person obtaining a copy of this
/// software and associated documentation files(the "Software"), to deal in the Software
/// without restriction, including without limitation the rights to use, copy, modify,
/// merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
/// permit persons to whom the Software is furnished to do so, subject to the following
/// conditions :
///
/// The above copyright notice and this permission notice shall be included in all copies
/// or substantial portions of the Software.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
/// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
/// PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
/// FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
/// OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DEALINGS IN THE SOFTWARE.
///
/// @section Description
/// Functions for working with NdArrays
///
#pragma once

#include "NumCpp/NdArray.hpp"

#include <complex>

namespace nc
{
    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				inArray1
    /// @param				inArray2
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<dtype, Alloc> add(const NdArray<dtype, Alloc>& inArray1, const NdArray<dtype, Alloc>& inArray2)
    {
        return inArray1 + inArray2;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				inArray
    /// @param				value
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<dtype, Alloc> add(const NdArray<dtype, Alloc>& inArray, dtype value) noexcept
    {
        return inArray + value;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				value
    /// @param				inArray
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<dtype, Alloc> add(dtype value, const NdArray<dtype, Alloc>& inArray) noexcept
    {
        return value + inArray;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				inArray1
    /// @param				inArray2
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<std::complex<dtype>, Alloc> add(const NdArray<dtype, Alloc>& inArray1, const NdArray<std::complex<dtype>, Alloc>& inArray2)
    {
        return inArray1 + inArray2;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				inArray1
    /// @param				inArray2
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<std::complex<dtype>, Alloc> add(const NdArray<std::complex<dtype>, Alloc>& inArray1, const NdArray<dtype, Alloc>& inArray2)
    {
        return inArray1 + inArray2;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				inArray
    /// @param				value
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<std::complex<dtype>, Alloc> add(const NdArray<dtype, Alloc>& inArray, const std::complex<dtype>& value) noexcept
    {
        return inArray + value;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				value
    /// @param				inArray
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<std::complex<dtype>, Alloc> add(const std::complex<dtype>& value, const NdArray<dtype, Alloc>& inArray) noexcept
    {
        return value + inArray;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				inArray
    /// @param				value
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<std::complex<dtype>, Alloc> add(const NdArray<std::complex<dtype>, Alloc>& inArray, dtype value) noexcept
    {
        return inArray + value;
    }

    //============================================================================
    // Method Description:
    ///						Add arguments element-wise.
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.add.html
    ///
    /// @param				value
    /// @param				inArray
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<std::complex<dtype>, Alloc> add(dtype value, const NdArray<std::complex<dtype>, Alloc>& inArray) noexcept
    {
        return value + inArray;
    }
}
