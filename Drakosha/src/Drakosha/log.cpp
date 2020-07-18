#include "log.h"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace Drakosha
{
	std::shared_ptr<spdlog::logger> Log::mCoreLogger;
	std::shared_ptr<spdlog::logger> Log::mClientLogger;

	void Log::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		mCoreLogger = spdlog::stdout_color_mt("DRAKOSHA");
		mCoreLogger->set_level(spdlog::level::trace);

		mClientLogger = spdlog::stdout_color_mt("APP");
		mClientLogger->set_level(spdlog::level::trace);
	}
}
