#include "config.h"
#include "Plugin.h"

namespace zeek::plugin::Corelight_GlobLoad { Plugin plugin; }

using namespace zeek::plugin::Corelight_GlobLoad;

zeek::plugin::Configuration Plugin::Configure()
	{
	zeek::plugin::Configuration config;
	config.name = "Corelight::GlobLoad";
	config.description = "TODO: Insert description";
	config.version.major = VERSION_MAJOR;
	config.version.minor = VERSION_MINOR;
	config.version.patch = VERSION_PATCH;
	return config;
	}
