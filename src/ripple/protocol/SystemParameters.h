//------------------------------------------------------------------------------
/*
    This file is part of glpd: https://github.com/glp/glpd
    Copyright (c) 2016 Glp

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef GLP_PROTOCOL_SYSTEMPARAMETERS_H_INCLUDED
#define GLP_PROTOCOL_SYSTEMPARAMETERS_H_INCLUDED

#include <cstdint>
#include <string>

namespace ripple {

// Various protocol and system specific constant globals.

/* The name of the system. */
static inline
std::string const&
systemName ()
{
    static std::string const name = "glp";
    return name;
}

/** Configure the initial native currency for glp. */
static
std::uint64_t const
SYSTEM_CURRENCY_INITIAL = 700 * 1000 * 1000 * 1000;

/** Number of drops per 1 GLP */
static
std::uint64_t const
SYSTEM_CURRENCY_PARTS = 1000000;

/** Number of drops in the genesis account. */
static
std::uint64_t const
SYSTEM_CURRENCY_START = SYSTEM_CURRENCY_INITIAL * SYSTEM_CURRENCY_PARTS; // Inital

static
std::uint64_t const
SYSTEM_INFLATE_PERIOD = 604800ull;  // Every Week.

static
std::uint64_t const
SYSTEM_INFLATE_RATE = 0.001;  // Rate of inflation

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT = 700 * 1000 * 1000 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS; // Total Amount

/* The currency code for the native currency. */
static inline
std::string const&
systemCurrencyCode ()
{
    static std::string const code = "GLP";
    return code;
}

} // glp

#endif
