/*
 * Copyright (c) 2013 Mellanox Technologies®. All rights reserved.
 *
 * This software is available to you under a choice of one of two licenses.
 * You may choose to be licensed under the terms of the GNU General Public
 * License (GPL) Version 2, available from the file COPYING in the main
 * directory of this source tree, or the Mellanox Technologies® BSD license
 * below:
 *
 *      - Redistribution and use in source and binary forms, with or without
 *        modification, are permitted provided that the following conditions
 *        are met:
 *
 *      - Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 *      - Neither the name of the Mellanox Technologies® nor the names of its
 *        contributors may be used to endorse or promote products derived from
 *        this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <xio_os.h>
#include "libxio.h"
#include "xio_ktransport.h"

/*---------------------------------------------------------------------------*/
/* xio_transport_state_str						     */
/*---------------------------------------------------------------------------*/
char *xio_transport_state_str(enum xio_transport_state state)
{
	switch (state) {
	case XIO_TRANSPORT_STATE_INIT:
		return "INIT";
	case XIO_TRANSPORT_STATE_LISTEN:
		return "LISTEN";
	case XIO_TRANSPORT_STATE_CONNECTING:
		return "CONNECTING";
	case XIO_TRANSPORT_STATE_CONNECTED:
		return "CONNECTED";
	case XIO_TRANSPORT_STATE_DISCONNECTED:
		return "DISCONNECTED";
	case XIO_TRANSPORT_STATE_RECONNECT:
		return "RECONNECT";
	case XIO_TRANSPORT_STATE_CLOSED:
		return "CLOSED";
	case XIO_TRANSPORT_STATE_DESTROYED:
		return "DESTROYED";
	case XIO_TRANSPORT_STATE_ERROR:
		return "ERROR";
	default:
		return "UNKNOWN";
	}

	return NULL;
}
EXPORT_SYMBOL(xio_transport_state_str);

