// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Benchmark_medium.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Benchmark_medium.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

BenchMarkMedium::BenchMarkMedium()
{
    // m_data com.eprosima.idl.parser.typecode.ArrayTypeCode@2b552920
    memset(&m_data, 0, (524288) * 1);
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1f36e637
    m_index = 0;

}

BenchMarkMedium::~BenchMarkMedium()
{


}

BenchMarkMedium::BenchMarkMedium(
        const BenchMarkMedium& x)
{
    m_data = x.m_data;
    m_index = x.m_index;
}

BenchMarkMedium::BenchMarkMedium(
        BenchMarkMedium&& x) noexcept
{
    m_data = std::move(x.m_data);
    m_index = x.m_index;
}

BenchMarkMedium& BenchMarkMedium::operator =(
        const BenchMarkMedium& x)
{

    m_data = x.m_data;
    m_index = x.m_index;

    return *this;
}

BenchMarkMedium& BenchMarkMedium::operator =(
        BenchMarkMedium&& x) noexcept
{

    m_data = std::move(x.m_data);
    m_index = x.m_index;

    return *this;
}

bool BenchMarkMedium::operator ==(
        const BenchMarkMedium& x) const
{

    return (m_data == x.m_data && m_index == x.m_index);
}

bool BenchMarkMedium::operator !=(
        const BenchMarkMedium& x) const
{
    return !(*this == x);
}

size_t BenchMarkMedium::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += ((524288) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t BenchMarkMedium::getCdrSerializedSize(
        const BenchMarkMedium& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((524288) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void BenchMarkMedium::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data;

    scdr << m_index;

}

void BenchMarkMedium::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;

    dcdr >> m_index;
}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void BenchMarkMedium::data(
        const std::array<char, 524288>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void BenchMarkMedium::data(
        std::array<char, 524288>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::array<char, 524288>& BenchMarkMedium::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::array<char, 524288>& BenchMarkMedium::data()
{
    return m_data;
}
/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void BenchMarkMedium::index(
        uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t BenchMarkMedium::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& BenchMarkMedium::index()
{
    return m_index;
}


size_t BenchMarkMedium::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool BenchMarkMedium::isKeyDefined()
{
    return false;
}

void BenchMarkMedium::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;

}
