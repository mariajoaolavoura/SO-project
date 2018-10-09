/*
 *  \author António Rui Borges - 2012-2015
 *  \authur Artur Pereira - 2009-2018
 */

#include "work_freelists.h"

#include <stdio.h>
#include <errno.h>
#include <inttypes.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>

#include "core.h"
#include "dal.h"
#include "freelists.h"
#include "bin_freelists.h"

namespace sofs18
{
    namespace work
    {

        uint32_t soAllocDataBlock()
        {
            soProbe(441, "%s()\n", __FUNCTION__);

            /* change the following line by your code */
            return bin::soAllocDataBlock();
        }

    };

};
