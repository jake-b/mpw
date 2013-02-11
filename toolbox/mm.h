#ifndef __mpw_mm_h__
#define __mpw_mm_h__

#include <cstdint>

namespace MM
{
	enum
	{
		memFullErr = -108,
		memWZErr = -111,
	};

	bool Init(uint8_t *memory, uint32_t memorySize, uint32_t reserved);

	uint16_t BlockMove(uint16_t trap);
	uint16_t DisposePtr(uint16_t trap);
	uint16_t NewPtr(uint16_t trap);
}

#endif