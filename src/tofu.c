#include <stdlib.h>

#include "ctx.h"
#include "rep.h"
#include "req.h"
#include "backend.h"

void tofu_loop(tofu_ctx_t *ctx) {
	extern tofu_backend_t tofu_backend_fcgi;
	extern tofu_backend_t tofu_backend_zmq;

	tofu_backend_zmq.loop(ctx);
}

