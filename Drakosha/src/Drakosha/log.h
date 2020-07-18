#pragma once

#include "core.h"

#include "spdlog/spdlog.h"
#include <spdlog/fmt/ostr.h>

namespace Drakosha
{

	class DRAKOSHA_API Log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return mCoreLogger; }

		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return mClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> mCoreLogger;
		static std::shared_ptr<spdlog::logger> mClientLogger;
	};
}

#define DRAKOSHA_CORE_FATAL(...) ::Drakosha::Log::getCoreLogger()->fatal(__VA_ARGS__)
#define DRAKOSHA_CORE_ERROR(...) ::Drakosha::Log::getCoreLogger()->error(__VA_ARGS__)
#define DRAKOSHA_CORE_WARN(...)  ::Drakosha::Log::getCoreLogger()->warn(__VA_ARGS__)
#define DRAKOSHA_CORE_INFO(...)  ::Drakosha::Log::getCoreLogger()->info(__VA_ARGS__)
#define DRAKOSHA_CORE_TRACE(...) ::Drakosha::Log::getCoreLogger()->trace(__VA_ARGS__)

#define DRAKOSHA_FATAL(...) ::Drakosha::Log::getClientLogger()->fatal(__VA_ARGS__)
#define DRAKOSHA_ERROR(...) ::Drakosha::Log::getClientLogger()->error(__VA_ARGS__)
#define DRAKOSHA_WARN(...)  ::Drakosha::Log::getClientLogger()->warn(__VA_ARGS__)
#define DRAKOSHA_INFO(...)  ::Drakosha::Log::getClientLogger()->info(__VA_ARGS__)
#define DRAKOSHA_TRACE(...) ::Drakosha::Log::getClientLogger()->trace(__VA_ARGS__)
