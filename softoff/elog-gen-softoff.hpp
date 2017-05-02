// This file was autogenerated.  Do not edit!
// See elog-gen.py for more details
#pragma once

#include <string>
#include <tuple>
#include <type_traits>
#include <sdbusplus/exception.hpp>
#include <phosphor-logging/log.hpp>
#include <phosphor-logging/elog.hpp>


namespace phosphor
{

namespace logging
{

namespace xyz
{
namespace openbmc_project
{
namespace SoftPowerOff
{
namespace Internal
{
namespace _SoftOffFailed
{

}  // namespace _SoftOffFailed

struct SoftOffFailed : public sdbusplus::exception_t
{
    static constexpr auto errName = "xyz.openbmc_project.SoftPowerOff.Internal.SoftOffFailed";
    static constexpr auto errDesc = "The SoftOff command to the host control object returned an error";
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Internal
} // namespace SoftPowerOff
} // namespace openbmc_project
} // namespace xyz

} // namespace logging
} // namespace phosphor
