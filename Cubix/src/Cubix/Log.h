#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace cubix
{
	class CUBIX_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

// Core Logger Macros
#define CX_CORE_TRACE(...)		::cubix::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CX_CORE_INFO(...)		::cubix::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CX_CORE_WARN(...)		::cubix::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CX_CORE_ERROR(...)		::cubix::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CX_CORE_CRITICAL(...)	::cubix::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define CX_CORE_DEBUG(...)		::cubix::Log::GetCoreLogger()->debug(__VA_ARGS__)

// Client Logger Macros
#define CX_TRACE(...)			::cubix::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CX_INFO(...)			::cubix::Log::GetClientLogger()->info(__VA_ARGS__)
#define CX_WARN(...)			::cubix::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CX_ERROR(...)			::cubix::Log::GetClientLogger()->error(__VA_ARGS__)
#define CX_CRIT(...)			::cubix::Log::GetClientLogger()->critical(__VA_ARGS__)
#define CX_DEBUG(...)			::cubix::Log::GetClientLogger()->debug(__VA_ARGS__)

